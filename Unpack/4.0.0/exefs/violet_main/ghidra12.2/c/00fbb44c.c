/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fbb44c; name: FUN_00fbb44c
 */


void FUN_00fbb44c(float *param_1,long *param_2)

{
  ushort uVar1;
  uint *puVar2;
  int *piVar3;
  ulong uVar4;
  ushort *puVar5;
  int *piVar6;
  float fVar7;
  char *local_28;
  
  piVar3 = (int *)param_2[1];
  fVar7 = 0.0;
  if (piVar3 != (int *)0x0) {
    if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 7) ||
       (uVar4 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar4 == 0)) {
      puVar2 = (uint *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar3 + uVar4);
      puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2);
    }
    local_28 = "Radius";
    puVar2 = bsearch(&local_28,puVar2 + 1,(ulong)*puVar2,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar2 != (uint *)0x0) {
      piVar3 = (int *)((long)puVar2 + (ulong)*puVar2);
      puVar5 = (ushort *)((long)piVar3 - (long)*piVar3);
      uVar1 = *puVar5;
      if (uVar1 < 7) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = (int *)0x0;
        if ((ulong)puVar5[3] != 0) {
          puVar2 = (uint *)((long)piVar3 + (ulong)puVar5[3]);
          piVar6 = (int *)((long)puVar2 + (ulong)*puVar2);
        }
      }
      if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 5) ||
         (uVar4 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[2], uVar4 == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = (long)*(char *)((long)piVar6 + uVar4) & 0xffffffff;
      }
      if (*(long *)(PTR_DAT_047d5608 + uVar4 * 8) == 4) {
        if ((uVar1 < 0xb) || ((ulong)puVar5[5] == 0)) {
          uVar4 = 0;
        }
        else {
          uVar4 = (ulong)*(ushort *)((long)piVar3 + (ulong)puVar5[5]);
        }
        fVar7 = *(float *)(*param_2 + uVar4);
      }
      else if ((0xe < uVar1) && ((ulong)puVar5[7] != 0)) {
        fVar7 = (float)*(double *)((long)piVar3 + (ulong)puVar5[7]);
      }
    }
  }
  *param_1 = fVar7;
  return;
}


