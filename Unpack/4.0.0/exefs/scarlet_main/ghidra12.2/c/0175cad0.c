/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0175cad0; name: nnMain
 */


void nnMain(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong local_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [104];
  
  uVar3 = nn::os::GetHostArgc();
  uVar5 = nn::os::GetHostArgv();
  FUN_014041ac(0);
  FUN_0175cc00(uVar3,uVar5);
  FUN_0175cdf4(auStack_98);
  puVar1 = PTR_DAT_047d4e20;
  uVar5 = *(undefined8 *)PTR_DAT_047d4e20;
  if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
    DAT_04859430 = DAT_04859418;
    __cxa_guard_release(&DAT_04859438);
  }
  plVar6 = (long *)FUN_0175d694(uVar5,"gfl::framework2::Application::HeapType::Main",0,0xa0000000,
                                DAT_04859430,0);
  (**(code **)(*plVar6 + 0xe0))(plVar6,"Application");
  FUN_0175cc20(&local_b8,plVar6);
  FUN_0175e858(local_b8);
  uVar2 = local_b8;
  local_b8 = 0;
  if (uVar2 != 0) {
    FUN_0175d23c(auStack_b0);
  }
  local_b8 = local_b8 & 0xffffffff00000000;
  FUN_0175cd3c(*(undefined8 *)puVar1,&local_b8);
  FUN_0175ccbc(auStack_98);
  return;
}


