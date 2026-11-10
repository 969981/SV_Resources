/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016ab48c; name: FUN_016ab48c
 */


long FUN_016ab48c(long *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  long lVar8;
  
  if ((char)param_1[10] == '\0') {
    if ((char)param_1[0xb] == '\0') {
      *(undefined1 *)(param_1 + 0xb) = 1;
    }
    lVar8 = param_1[10];
  }
  else {
    puVar5 = (undefined8 *)FUN_015a02dc(param_1,*(undefined4 *)((long)param_1 + 0x54));
    if (puVar5 != (undefined8 *)0x0) {
      pbVar7 = *(byte **)(param_2 + 8);
      puVar6 = &DAT_cbf29ce484222645;
      bVar2 = *pbVar7;
      while (bVar2 != 0) {
        pbVar7 = pbVar7 + 1;
        puVar6 = (undefined1 *)(((ulong)puVar6 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar7;
      }
      *puVar5 = puVar6;
    }
    uVar1 = *(int *)((long)param_1 + 0x54) + 1;
    lVar8 = param_1[10];
    *(uint *)((long)param_1 + 0x54) = uVar1;
    iVar3 = (**(code **)(*param_1 + 0x88))(param_1);
    uVar4 = (**(code **)(*param_1 + 0xa0))(param_1);
    if (iVar3 * (uVar4 & 0xffff) <= uVar1) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return lVar8;
}


