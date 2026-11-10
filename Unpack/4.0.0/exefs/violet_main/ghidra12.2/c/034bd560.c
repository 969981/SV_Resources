/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034bd560; name: FUN_034bd560
 */


/* WARNING: Removing unreachable block (ram,0x034bd60c) */

undefined8 FUN_034bd560(long *param_1,int param_2)

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
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar6 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,(ulong)uVar1 * 0x28);
  uVar7 = 0;
  if (lVar6 != 0) {
    lVar8 = *param_1;
    if ((lVar8 != 0) && (lVar8 != lVar6)) {
      if (uVar4 != 0) {
        lVar8 = 0;
        do {
          puVar2 = (undefined8 *)(lVar6 + lVar8);
          *(undefined4 *)(puVar2 + 1) = 0;
          *(undefined1 *)((long)puVar2 + 0xc) = 0;
          *puVar2 = &PTR_LAB_047c4568;
          puVar2[2] = 0;
          puVar2[3] = 0;
          lVar3 = *param_1 + lVar8;
          *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(lVar3 + 0x20);
          *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(lVar3 + 8);
          *(undefined1 *)((long)puVar2 + 0xc) = *(undefined1 *)(lVar3 + 0xc);
          puVar2[2] = *(undefined8 *)(lVar3 + 0x10);
          *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(lVar3 + 0x18);
          *(undefined4 *)((long)puVar2 + 0x1c) = *(undefined4 *)(lVar3 + 0x1c);
          *(undefined8 *)(lVar3 + 0x10) = 0;
          *(undefined8 *)(lVar3 + 0x18) = 0;
          (*(code *)**(undefined8 **)(*param_1 + lVar8))();
          lVar8 = lVar8 + 0x28;
        } while ((ulong)uVar4 * 0x28 != lVar8);
        lVar8 = *param_1;
      }
      (**(code **)(puVar5 + 0x30))(0,lVar8);
    }
    uVar7 = 1;
    *param_1 = lVar6;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return uVar7;
}


