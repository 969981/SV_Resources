/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00163de0; name: FUN_00163de0
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00163f24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00163de0(long param_1,undefined8 *param_2,byte *param_3,long param_4,undefined8 param_5)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  int iVar6;
  
  FUN_0015cf00(param_1,0x38);
  if ((param_2 == (undefined8 *)0x0) || (param_2[2] == 0)) {
LAB_00163eec:
    *(undefined8 *)(param_1 + 0x20) = 0;
    return;
  }
  *(undefined8 **)(param_1 + 0x28) = param_2;
  lVar4 = *(long *)*param_2;
  if (lVar4 == 0) {
    iVar3 = FUN_0015ed20("v:\\devel\\projects\\oodle2\\core\\longrangematcher.cpp",0x50b,
                         "LRMScanner_Init","lrmfirst != NULL");
    if (iVar3 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined4 *)(param_1 + 0xc) = _DAT_00000034;
    puVar5 = (uint *)&DAT_00000030;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar4 + 0x34);
    puVar5 = (uint *)(lVar4 + 0x30);
  }
  uVar2 = *puVar5;
  *(uint *)(param_1 + 0x18) = uVar2;
  *(byte **)(param_1 + 0x20) = (byte *)(param_4 - (int)uVar2);
  *(undefined8 *)(param_1 + 0x30) = param_5;
  if ((byte *)(param_4 - (int)uVar2) <= param_3) goto LAB_00163eec;
  if (uVar2 == 8) {
    *(uint *)(param_1 + 8) =
         (uint)param_3[7] +
         ((uint)param_3[3] +
         ((uint)param_3[2] + ((uint)param_3[1] + (uint)*param_3 * 0x2c2c57ed) * 0x2c2c57ed) *
         0x2c2c57ed) * 0x511add11 +
         ((uint)param_3[6] + ((uint)param_3[5] + (uint)param_3[4] * 0x2c2c57ed) * 0x2c2c57ed) *
         0x2c2c57ed;
    return;
  }
  if ((int)uVar2 < 1) {
    *(undefined4 *)(param_1 + 8) = 0;
    return;
  }
  if (uVar2 == 1) {
    lVar4 = 0;
    iVar6 = 0;
  }
  else {
    lVar4 = 0;
    iVar3 = 0;
    do {
      pbVar1 = param_3 + lVar4;
      lVar4 = lVar4 + 2;
      iVar3 = (uint)pbVar1[1] + ((uint)*pbVar1 + iVar3 * 0x2c2c57ed) * 0x2c2c57ed;
    } while ((ulong)uVar2 - ((ulong)uVar2 & 1) != lVar4);
    iVar6 = iVar3 * 0x2c2c57ed;
    if ((uVar2 & 1) == 0) goto LAB_00163f78;
  }
  iVar3 = iVar6 + (uint)param_3[lVar4];
LAB_00163f78:
  *(int *)(param_1 + 8) = iVar3;
  return;
}


