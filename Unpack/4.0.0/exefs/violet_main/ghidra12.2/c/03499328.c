/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03499328; name: FUN_03499328
 */


undefined8 FUN_03499328(long *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  
  puVar4 = PTR_DAT_047e2fd0;
  uVar7 = *(uint *)(param_2 + 1);
  uVar8 = (ulong)uVar7;
  if (uVar7 != 0) {
    lVar5 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,uVar8 << 3);
    *param_1 = lVar5;
    if (lVar5 == 0) {
      return 0x34;
    }
    *(uint *)((long)param_1 + 0xc) = uVar7;
    if ((int)param_2[1] != 0) {
      plVar3 = (long *)*param_2;
      do {
        uVar2 = *(uint *)(param_1 + 1);
        uVar7 = (uint)uVar8;
        lVar5 = *plVar3;
        if (uVar2 < uVar7) {
LAB_034993c4:
          if (uVar2 < uVar7) {
            uVar7 = *(uint *)(param_1 + 1);
            lVar6 = *param_1;
            *(uint *)(param_1 + 1) = uVar7 + 1;
            if (lVar6 != 0) {
              *(long *)(lVar6 + (ulong)uVar7 * 8) = lVar5;
              *(int *)(lVar5 + 0x74) = *(int *)(lVar5 + 0x74) + 1;
              lVar5 = *(long *)(lVar6 + (ulong)uVar7 * 8);
              *(int *)(lVar5 + 0x84) = *(int *)(lVar5 + 0x84) + 1;
            }
          }
        }
        else {
          iVar1 = uVar7 + (uVar7 >> 1);
          if (uVar7 == 0) {
            iVar1 = 1;
          }
          uVar7 = iVar1 + uVar7;
          lVar6 = (**(code **)(puVar4 + 0x20))(0,*param_1,(ulong)uVar7 << 3);
          if (lVar6 != 0) {
            *param_1 = lVar6;
            *(uint *)((long)param_1 + 0xc) = uVar7;
            goto LAB_034993c4;
          }
        }
        if (plVar3 + 1 == (long *)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 8)) {
          return 1;
        }
        uVar8 = (ulong)*(uint *)((long)param_1 + 0xc);
        plVar3 = plVar3 + 1;
      } while( true );
    }
  }
  return 1;
}


