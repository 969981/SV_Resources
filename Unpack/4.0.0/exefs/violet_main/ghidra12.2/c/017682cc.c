/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017682cc; name: FUN_017682cc
 */


long FUN_017682cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((DAT_04839888 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04839888);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_00b1c558,&DAT_04839878,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04839888);
    }
  }
  uVar3 = FUN_0176845c(param_1,param_2,param_3);
  FUN_01768394(&DAT_04839878,uVar3);
  lVar1 = 0;
  if (DAT_04839878 != 0) {
    lVar1 = DAT_04839878 + 0x20;
  }
  FUN_0100ba9c(lVar1);
  return DAT_04839878;
}


