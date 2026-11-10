/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ddfacc; name: FUN_01ddfacc
 */


ulong FUN_01ddfacc(long param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  long *plVar6;
  undefined1 *local_d0;
  char **ppcStack_c8;
  undefined8 local_c0;
  long *local_b8;
  char *local_b0 [4];
  char *local_90;
  char *pcStack_88;
  char acStack_70 [64];
  
  uVar3 = FUN_01de0d6c();
  FUN_01de0e08(param_2,acStack_70);
  local_b0[0] = "default_empty";
  local_b0[1] = "default_containing";
  local_b0[2] = "default_max";
  local_b0[3] = "gray_empty";
  local_90 = "gray_containing";
  pcStack_88 = "gray_max";
  uVar2 = snprintf((char *)local_b0,0x40,"%s/%s",acStack_70,local_b0[uVar3 & 0xffffffff]);
  uVar3 = (ulong)uVar2;
  plVar6 = *(long **)(param_1 + 0x30);
  if (plVar6 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar6 + 0x58))(plVar6);
  }
  local_d0 = &DAT_cbf29ce484222645;
  if ((byte)local_b0[0] != 0) {
    pbVar5 = (byte *)((ulong)local_b0 | 1);
    bVar1 = (byte)local_b0[0];
    do {
      local_d0 = (undefined1 *)(((ulong)local_d0 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
  }
  ppcStack_c8 = local_b0;
  local_c0 = 0x3f;
  local_b8 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    lVar4 = FUN_00e895f4(plVar6[0x2e],&local_d0);
    if (lVar4 != 0) {
      FUN_00dfcea4();
    }
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 0x20))();
    }
    uVar3 = (**(code **)(*plVar6 + 0x60))(plVar6);
  }
  return uVar3;
}


