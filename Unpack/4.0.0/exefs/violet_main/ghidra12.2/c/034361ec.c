/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034361ec; name: FUN_034361ec
 */


/* WARNING: Removing unreachable block (ram,0x03436284) */

undefined8 FUN_034361ec(long *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar5 = PTR_DAT_047e2fd0;
  uVar4 = *(uint *)(param_1 + 1);
  uVar1 = *(int *)((long)param_1 + 0xc) + 8;
  lVar6 = (**(code **)(PTR_DAT_047e2fd0 + 0x18))(0xb,(ulong)uVar1 * 0x50,0x10);
  uVar7 = 0;
  if (lVar6 != 0) {
    lVar8 = *param_1;
    if ((lVar8 != 0) && (lVar8 != lVar6)) {
      if (uVar4 != 0) {
        lVar8 = 0;
        do {
          puVar2 = (undefined8 *)(lVar6 + lVar8);
          *puVar2 = &PTR_FUN_047bf6c0;
          puVar2[8] = 0;
          *(undefined4 *)(puVar2 + 9) = 0;
          puVar2[6] = 0;
          puVar2[7] = 0;
          lVar3 = *param_1 + lVar8;
          puVar2[7] = *(undefined8 *)(lVar3 + 0x38);
          *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(lVar3 + 0x40);
          *(undefined4 *)((long)puVar2 + 0x44) = *(undefined4 *)(lVar3 + 0x44);
          *(undefined8 *)(lVar3 + 0x38) = 0;
          *(undefined8 *)(lVar3 + 0x40) = 0;
          puVar2[6] = *(undefined8 *)(lVar3 + 0x30);
          uVar7 = *(undefined8 *)(lVar3 + 0x10);
          puVar2[3] = *(undefined8 *)(lVar3 + 0x18);
          puVar2[2] = uVar7;
          uVar7 = *(undefined8 *)(lVar3 + 0x20);
          puVar2[5] = *(undefined8 *)(lVar3 + 0x28);
          puVar2[4] = uVar7;
          *(undefined4 *)(puVar2 + 9) = *(undefined4 *)(lVar3 + 0x48);
          (*(code *)**(undefined8 **)(*param_1 + lVar8))();
          lVar8 = lVar8 + 0x50;
        } while ((ulong)uVar4 * 0x50 != lVar8);
        lVar8 = *param_1;
      }
      (**(code **)(puVar5 + 0x30))(0xb,lVar8);
    }
    uVar7 = 1;
    *param_1 = lVar6;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return uVar7;
}


