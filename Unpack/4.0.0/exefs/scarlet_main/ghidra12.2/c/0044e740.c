/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0044e740; name: FUN_0044e740
 */


undefined8
FUN_0044e740(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_60;
  undefined4 local_58 [10];
  
  local_60 = 0;
  puVar1 = &local_60;
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = param_1;
  }
  local_58[0] = param_5;
  if ((DAT_047f19a8 == 0) || (iVar3 = FUN_0047e200(DAT_047f19a8,local_58), iVar3 < 0)) {
    lVar4 = FUN_0045c970(local_58,&DAT_03cfa0a8,0x1b,0x28,&LAB_0044ea50);
  }
  else {
    lVar4 = FUN_0047e450(DAT_047f19a8,iVar3);
  }
  if (lVar4 == 0) {
    iVar3 = FUN_003ddaf0(puVar1,param_2,param_3,param_4,DAT_044a9b88 & 0x2806);
  }
  else {
    uVar2 = DAT_044a9b88;
    if ((*(ulong *)(lVar4 + 0x20) & 2) != 0) {
      uVar2 = 0xffffffffffffffff;
    }
    iVar3 = FUN_003ddb00(puVar1,param_2,param_3,param_4,uVar2 & *(ulong *)(lVar4 + 0x18),
                         *(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
  }
  if (iVar3 < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar1;
  }
  return uVar5;
}


