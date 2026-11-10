/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd5924; name: FUN_01dd5924
 */


void FUN_01dd5924(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  lVar4 = *(long *)(param_1 + 0x50);
  uVar1 = FUN_00cf4cfc(*(undefined8 *)(lVar4 + 0x70));
  if (((uVar1 & 1) == 0) &&
     ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0x70) + 0x10) + 4) >> 2 & 1) == 0)) {
    local_40 = 0xa41cdefe7c6e7444;
    pcStack_38 = "FSYS_BOX_JUDGE";
    local_30 = 0xe;
    local_28 = (long *)0x0;
    uVar1 = FUN_01dee378(&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    iVar3 = *(int *)(param_1 + 0x60);
    if (iVar3 == 1) {
      uVar2 = 2;
      if ((uVar1 & 1) == 0) {
        uVar2 = 3;
      }
      goto LAB_01dd59c4;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x60);
  }
  if (iVar3 == 3) {
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
  }
LAB_01dd59c4:
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  return;
}


