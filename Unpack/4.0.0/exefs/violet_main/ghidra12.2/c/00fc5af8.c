/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fc5af8; name: FUN_00fc5af8
 */


void FUN_00fc5af8(undefined4 *param_1,long *param_2)

{
  ushort uVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  ushort *puVar6;
  int *piVar7;
  float fVar8;
  char *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_50 = (char *)0x8093523c598cb9f5;
  pcStack_48 = "Length";
  local_40 = 6;
  local_38 = (long *)0x0;
  piVar2 = (int *)FUN_00f305e0(param_2,&local_50);
  if ((piVar2 == (int *)0x0) || (*(ushort *)((long)piVar2 - (long)*piVar2) < 7)) {
    uVar4 = 0;
  }
  else {
    uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3];
    uVar4 = 0;
    if (uVar5 != 0) {
      uVar4 = *(undefined4 *)((long)piVar2 + uVar5);
    }
  }
  *param_1 = uVar4;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  piVar2 = (int *)param_2[1];
  fVar8 = 0.0;
  if (piVar2 != (int *)0x0) {
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
       (uVar5 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar5 == 0)) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)((long)piVar2 + uVar5);
      puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
    }
    local_50 = "NextPhaseProb";
    puVar3 = bsearch(&local_50,puVar3 + 1,(ulong)*puVar3,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar3 != (uint *)0x0) {
      piVar2 = (int *)((long)puVar3 + (ulong)*puVar3);
      puVar6 = (ushort *)((long)piVar2 - (long)*piVar2);
      uVar1 = *puVar6;
      if (uVar1 < 7) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)0x0;
        if ((ulong)puVar6[3] != 0) {
          puVar3 = (uint *)((long)piVar2 + (ulong)puVar6[3]);
          piVar7 = (int *)((long)puVar3 + (ulong)*puVar3);
        }
      }
      if ((*(ushort *)((long)piVar7 - (long)*piVar7) < 5) ||
         (uVar5 = (ulong)((ushort *)((long)piVar7 - (long)*piVar7))[2], uVar5 == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = (long)*(char *)((long)piVar7 + uVar5) & 0xffffffff;
      }
      if (*(long *)(PTR_DAT_047d5608 + uVar5 * 8) == 4) {
        if ((uVar1 < 0xb) || ((ulong)puVar6[5] == 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar6[5]);
        }
        fVar8 = *(float *)(*param_2 + uVar5);
      }
      else if ((0xe < uVar1) && ((ulong)puVar6[7] != 0)) {
        fVar8 = (float)*(double *)((long)piVar2 + (ulong)puVar6[7]);
      }
    }
  }
  param_1[1] = fVar8;
  return;
}


