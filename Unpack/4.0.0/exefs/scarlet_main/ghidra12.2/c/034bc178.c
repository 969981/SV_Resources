/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034bc178; name: FUN_034bc178
 */


/* WARNING: Removing unreachable block (ram,0x034bc244) */
/* WARNING: Removing unreachable block (ram,0x034bc290) */
/* WARNING: Removing unreachable block (ram,0x034bc254) */
/* WARNING: Removing unreachable block (ram,0x034bc264) */
/* WARNING: Removing unreachable block (ram,0x034bc27c) */
/* WARNING: Removing unreachable block (ram,0x034bc294) */

undefined8 FUN_034bc178(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  puVar4 = PTR_DAT_047e2fd0;
  uVar3 = *(uint *)(param_1 + 1);
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar5 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,(ulong)uVar1 * 0x28);
  uVar6 = 0;
  if (lVar5 != 0) {
    lVar7 = *param_1;
    if ((lVar7 != 0) && (lVar7 != lVar5)) {
      if (uVar3 != 0) {
        uVar8 = 0;
        do {
          puVar2 = (undefined8 *)(lVar5 + uVar8 * 0x28);
          *(undefined4 *)(puVar2 + 1) = 0;
          *(undefined1 *)((long)puVar2 + 0xc) = 0;
          puVar2[3] = 0;
          puVar2[2] = 0;
          *puVar2 = &PTR_LAB_047c44a8;
          lVar7 = *param_1 + uVar8 * 0x28;
          *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(lVar7 + 0x20);
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(lVar7 + 8);
          *(undefined1 *)((long)puVar2 + 0xc) = *(undefined1 *)(lVar7 + 0xc);
          puVar2[2] = *(undefined8 *)(lVar7 + 0x10);
          *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(lVar7 + 0x18);
          *(undefined4 *)((long)puVar2 + 0x1c) = *(undefined4 *)(lVar7 + 0x1c);
          *(undefined8 *)(lVar7 + 0x10) = 0;
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (*(code *)**(undefined8 **)(*param_1 + uVar8 * 0x28))();
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar3);
        lVar7 = *param_1;
      }
      (**(code **)(puVar4 + 0x30))(0,lVar7);
    }
    uVar6 = 1;
    *param_1 = lVar5;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return uVar6;
}


