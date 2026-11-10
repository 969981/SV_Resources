/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a3dc08; name: FUN_02a3dc08
 */


void FUN_02a3dc08(long param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if (7 < *(int *)(param_1 + 0x50)) {
    iVar1 = *(int *)(param_1 + 0x28);
  }
  if (iVar1 - 1U < 3) {
    if (*(int *)(param_1 + 0x80) < 1) {
      dVar6 = (double)*(long *)(DAT_0485a0a0 + 0x130) / 1000000.0;
      iVar5 = *(int *)(param_1 + 0x48) + 1;
      iVar2 = *(int *)(param_1 + 0x6c);
      *(int *)(param_1 + 0x48) = iVar5;
      *(double *)(param_1 + 0x30) = dVar6;
      dVar6 = *(double *)(param_1 + 0x38) + dVar6;
      *(double *)(param_1 + 0x38) = dVar6;
      if (0 < *(int *)(param_1 + 0x70)) {
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + -1;
      }
      if (*(int *)(param_1 + 0x5c) <= iVar5) {
        dVar6 = dVar6 / (double)*(int *)(param_1 + 0x5c);
        *(double *)(param_1 + 0x40) = dVar6;
        dVar6 = dVar6 / 33.333334;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined4 *)(param_1 + 0x48) = 0;
        if ((double)*(float *)(param_1 + 0x60) <= dVar6) {
          iVar5 = *(int *)(param_1 + 0x54);
          if (iVar2 < iVar5) {
            iVar5 = iVar2 + 1;
          }
          bVar3 = iVar5 != iVar2;
          if (bVar3) {
            *(undefined4 *)(param_1 + 0x80) = 2;
          }
          *(undefined4 *)(param_1 + 0x4c) = 0;
          *(double *)(param_1 + 0x78) = dVar6;
          *(undefined4 *)(param_1 + 0x70) = 0x1e;
        }
        else {
          if (0.800000011920929 < dVar6) {
            return;
          }
          iVar5 = *(int *)(param_1 + 0x4c) + 1;
          *(int *)(param_1 + 0x4c) = iVar5;
          if (iVar5 < *(int *)(param_1 + 0x58)) {
            return;
          }
          iVar5 = iVar2 + -1;
          if (iVar2 < 1) {
            iVar5 = 0;
          }
          bVar3 = iVar5 != iVar2;
          if (bVar3) {
            *(undefined4 *)(param_1 + 0x80) = 2;
          }
          *(undefined4 *)(param_1 + 0x4c) = 0;
        }
        if ((iVar1 == 1) && (bVar3)) {
          uVar8 = (&DAT_03d5f120)[iVar5];
          *(int *)(param_1 + 0x6c) = iVar5;
          uVar7 = (&DAT_03d5f138)[iVar5];
          local_50 = 0x4aa9ba3dccea94ea;
          pcStack_48 = "3DBufferWidthScale";
          local_40 = 0x12;
          local_38 = (long *)0x0;
          plVar4 = (long *)(**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x30))();
          (**(code **)(*plVar4 + 0x10))(uVar8,plVar4,&local_50);
          if (local_38 != (long *)0x0) {
            (**(code **)(*local_38 + 0x20))();
          }
          local_50 = 0x66e7a756352d0d9f;
          pcStack_48 = "3DBufferHeightScale";
          local_40 = 0x13;
          local_38 = (long *)0x0;
          plVar4 = (long *)(**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x30))();
          (**(code **)(*plVar4 + 0x10))(uVar7,plVar4,&local_50);
          if (local_38 != (long *)0x0) {
            (**(code **)(*local_38 + 0x20))();
          }
        }
      }
    }
    else {
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
    }
  }
  return;
}


