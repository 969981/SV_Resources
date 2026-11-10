/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b6eb88; name: FUN_00b6eb88
 */


void FUN_00b6eb88(undefined8 *param_1,string *param_2)

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
  if (param_2 == (string *)0x0) {
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)this = 0;
  }
  else {
    std::string::string(this,param_2);
  }
  *param_1 = this;
  return;
}


