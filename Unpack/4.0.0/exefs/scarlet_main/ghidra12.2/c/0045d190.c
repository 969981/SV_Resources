/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0045d190; name: FUN_0045d190
 */


undefined8 FUN_0045d190(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 local_30 [4];
  
  local_30[0] = param_1;
  if (DAT_047f19f8 != 0) {
    uVar1 = FUN_0047e200(DAT_047f19f8,local_30);
    lVar2 = FUN_0047e450(DAT_047f19f8,uVar1);
    if (lVar2 != 0) goto LAB_0045d1f0;
  }
  lVar2 = FUN_0045c970(local_30,&DAT_03cffab8,0x30,0xc,&LAB_0045d2b0);
  if (lVar2 == 0) {
    return 0;
  }
LAB_0045d1f0:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(lVar2 + 4);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(lVar2 + 8);
  }
  return 1;
}


