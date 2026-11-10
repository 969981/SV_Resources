/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bf4408; name: FUN_00bf4408
 */


void FUN_00bf4408(undefined8 *param_1,long param_2,string *param_3)

{
  long lVar1;
  int iVar2;
  string *this;
  long *plVar3;
  
  lVar1 = tpidr_el0;
  plVar3 = *(long **)(lVar1 + 0x30);
  if (plVar3 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar3 = DAT_04859430;
    *(long **)(lVar1 + 0x30) = DAT_04859430;
  }
  this = (string *)(**(code **)(*plVar3 + 0x10))(plVar3,0x18,8);
  if (param_3 == (string *)0x0) {
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)this = 0;
  }
  else {
    std::string::string(this,param_3);
  }
  *param_1 = this;
  if (param_2 == 0) {
    return;
  }
  FUN_00bf4510(param_2,this);
  return;
}


