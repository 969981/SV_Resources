/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007c27ec; name: FUN_007c27ec
 */


void FUN_007c27ec(long *param_1,long param_2,long param_3,long param_4,long param_5,
                 undefined4 param_6,ushort param_7)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  
  FUN_007c3aac(param_1,param_3,1);
  puVar5 = PTR_DAT_047d1058;
  param_1[4] = (long)(PTR_DAT_047d0878 + 0x10);
  lVar6 = *(long *)(param_2 + 8);
  *param_1 = (long)(puVar5 + 0x10);
  param_1[7] = param_5;
  param_1[8] = param_3;
  plVar1 = param_1 + 0x12;
  param_1[5] = lVar6;
  param_1[6] = param_4;
  param_1[9] = (long)(param_1 + 9);
  param_1[10] = (long)(param_1 + 9);
  param_1[0xb] = -0x100000000;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0x11) = param_6;
  param_1[0xf] = (long)(param_1 + 0xe);
  param_1[0x10] = -0x100000000;
  param_1[0xd] = 0;
  param_1[0xe] = (long)(param_1 + 0xe);
  FUN_007c9db0(plVar1,param_3);
  *(undefined2 *)(param_1 + 0x1a) = 4;
  puVar5 = PTR_DAT_047d1060;
  do {
    iVar2 = *(int *)puVar5;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar4) {
      *(int *)puVar5 = iVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  *(short *)((long)param_1 + 0xd2) = (short)iVar2;
  *(ushort *)(param_1 + 0x1a) = *(ushort *)(param_1 + 0x1a) & 0xfffe | param_7 & 1;
  if ((param_7 & 1) == 0) {
    *(undefined4 *)((long)param_1 + 0x5c) = 0x60;
    *(undefined4 *)((long)param_1 + 0x84) = 0x10;
    return;
  }
  FUN_007c9e3c(plVar1);
  *(undefined4 *)((long)param_1 + 0x5c) = 0x60;
  *(undefined4 *)((long)param_1 + 0x84) = 0x10;
  FUN_007c9e44(plVar1);
  return;
}


