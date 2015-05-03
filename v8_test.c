v8::Handle<v8::Value> FortyTwo(const v8::Arguments& args) {
  v8::HandleScope handle_scope;
  return handle_scope.Close(v8::Integer::New(42));
}
