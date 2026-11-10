/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034922c8; name: FUN_034922c8
 */


/* WARNING: Removing unreachable block (ram,0x0349238c) */
/* WARNING: Removing unreachable block (ram,0x034923d8) */
/* WARNING: Removing unreachable block (ram,0x0349239c) */
/* WARNING: Removing unreachable block (ram,0x034923ac) */
/* WARNING: Removing unreachable block (ram,0x034923c4) */
/* WARNING: Removing unreachable block (ram,0x034923dc) */

undefined8 FUN_034922c8(long *param_1,int param_2)

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
  lVar5 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,(ulong)uVar1 * 0x30);
  uVar6 = 0;
  if (lVar5 != 0) {
    lVar7 = *param_1;
    if ((lVar7 != 0) && (lVar7 != lVar5)) {
      if (uVar3 != 0) {
        uVar8 = 0;
        do {
          puVar2 = (undefined8 *)(lVar5 + uVar8 * 0x30);
          *(undefined1 *)(puVar2 + 2) = 0;
          puVar2[3] = 0;
          puVar2[4] = 0;
          *puVar2 = &PTR_LAB_047c3300;
          puVar2[1] = 0;
          lVar7 = *param_1 + uVar8 * 0x30;
          *(undefined4 *)(puVar2 + 5) = *(undefined4 *)(lVar7 + 0x28);
          puVar2[1] = *(undefined8 *)(lVar7 + 8);
          *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(lVar7 + 0x10);
          puVar2[3] = *(undefined8 *)(lVar7 + 0x18);
          *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(lVar7 + 0x20);
          *(undefined4 *)((long)puVar2 + 0x24) = *(undefined4 *)(lVar7 + 0x24);
          *(undefined8 *)(lVar7 + 0x18) = 0;
          *(undefined8 *)(lVar7 + 0x20) = 0;
          (*(code *)**(undefined8 **)(*param_1 + uVar8 * 0x30))();
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


