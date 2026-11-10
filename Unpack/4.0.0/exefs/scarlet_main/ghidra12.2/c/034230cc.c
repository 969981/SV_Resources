/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034230cc; name: FUN_034230cc
 */


undefined8 FUN_034230cc(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar4 = PTR_DAT_047e2fd0;
  uVar3 = *(uint *)(param_1 + 1);
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar5 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(9,(ulong)uVar1 * 0x90);
  uVar6 = 0;
  if (lVar5 != 0) {
    lVar7 = *param_1;
    if ((lVar7 != 0) && (lVar7 != lVar5)) {
      if (uVar3 != 0) {
        lVar7 = 0;
        do {
          puVar2 = (undefined8 *)(lVar5 + lVar7);
          puVar2[5] = 0;
          puVar2[6] = 0;
          *(undefined4 *)(puVar2 + 4) = 0;
          *(undefined4 *)(puVar2 + 0xf) = 0;
          puVar2[0x10] = 0;
          *(undefined4 *)(puVar2 + 0x11) = 0;
          *(undefined1 *)((long)puVar2 + 0x8c) = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          *puVar2 = 0xffffffffffffffff;
          puVar2[1] = &PTR_LAB_047bf588;
          puVar2[7] = 0;
          puVar2[8] = 0;
          puVar2[10] = 0;
          puVar2[0xb] = 0;
          puVar2[0xd] = 0;
          puVar2[0xe] = 0;
          FUN_034115a8(puVar2,*param_1 + lVar7);
          FUN_03411470(*param_1 + lVar7);
          lVar7 = lVar7 + 0x90;
        } while ((ulong)uVar3 * 0x90 != lVar7);
        lVar7 = *param_1;
      }
      (**(code **)(puVar4 + 0x30))(9,lVar7);
    }
    uVar6 = 1;
    *param_1 = lVar5;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return uVar6;
}


