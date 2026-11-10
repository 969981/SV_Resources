/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0316ca24; name: FUN_0316ca24
 */


ulong FUN_0316ca24(long param_1,long *param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint *local_80;
  ulong local_78;
  undefined4 local_70;
  uint local_64;
  
  local_64 = 0;
  puVar2 = &local_64;
  local_78 = 0x8000000100000001;
  local_70 = 1;
  iVar3 = *(int *)(param_1 + 0x218);
  local_80 = puVar2;
  if (iVar3 < 1) {
    uVar6 = 0xffffffff;
  }
  else if ((param_5 & 1) == 0) {
    uVar5 = (ulong)*(uint *)(param_2 + 1);
    uVar4 = 0;
    uVar8 = 0;
    uVar6 = 0xffffffff;
    puVar2 = &local_64;
    do {
      if ((0 < (int)uVar5) &&
         (plVar7 = *(long **)(*(long *)(param_1 + 0x210) + uVar8 * 0xf0), plVar7 != (long *)0x0)) {
        lVar9 = 0;
        lVar10 = 0;
        do {
          *puVar2 = uVar4 & 0xfffffffe;
          (**(code **)(*plVar7 + 0x28))(plVar7,*param_2 + lVar9,1,&local_80);
          uVar4 = *local_80;
          puVar2 = local_80;
          if ((uVar4 & 1) != 0) {
            uVar6 = uVar8 & 0xffffffff;
            goto LAB_0316cbd4;
          }
          uVar5 = (ulong)(int)param_2[1];
          lVar10 = lVar10 + 1;
          lVar9 = lVar9 + 0x10;
        } while (lVar10 < (long)uVar5);
        iVar3 = *(int *)(param_1 + 0x218);
      }
      uVar8 = uVar8 + 1;
    } while ((long)uVar8 < (long)iVar3);
  }
  else {
    uVar4 = 0;
    uVar8 = 0;
    uVar6 = 0xffffffff;
    puVar2 = &local_64;
    do {
      plVar7 = *(long **)(*(long *)(param_1 + 0x210) + uVar8 * 0xf0);
      if (plVar7 == (long *)0x0) {
        iVar1 = *(int *)(*(long *)(param_1 + 0x210) + uVar8 * 0xf0 + 8);
        if (iVar1 == param_3 || iVar1 == param_4) {
LAB_0316cbc8:
          uVar6 = uVar8 & 0xffffffff;
          break;
        }
      }
      else if (0 < (int)param_2[1]) {
        lVar9 = 0;
        lVar10 = 0;
        do {
          *puVar2 = uVar4 & 0xfffffffe;
          (**(code **)(*plVar7 + 0x28))(plVar7,*param_2 + lVar9,1,&local_80);
          uVar4 = *local_80;
          puVar2 = local_80;
          if ((uVar4 & 1) != 0) goto LAB_0316cbc8;
          lVar10 = lVar10 + 1;
          lVar9 = lVar9 + 0x10;
        } while (lVar10 < (int)param_2[1]);
        iVar3 = *(int *)(param_1 + 0x218);
      }
      uVar8 = uVar8 + 1;
    } while ((long)uVar8 < (long)iVar3);
  }
LAB_0316cbd4:
  uVar5 = local_78;
  uVar8 = local_78 >> 0x20;
  local_78 = uVar8 << 0x20;
  if ((puVar2 != (uint *)0x0) && (-1 < (long)uVar5)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,puVar2,uVar8 << 2);
  }
  return uVar6;
}


