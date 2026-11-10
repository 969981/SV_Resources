/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015efc20; name: FUN_015efc20
 */


undefined8 FUN_015efc20(int *param_1,int *param_2)

{
  ushort *puVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  
  puVar1 = (ushort *)((long)param_2 - (long)*param_2);
  if (*puVar1 < 0xb) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if ((ulong)puVar1[5] != 0) {
      uVar3 = (uint)*(ushort *)((long)param_2 + (ulong)puVar1[5]);
    }
    if (0xc < *puVar1) {
      uVar2 = 0;
      if ((ulong)puVar1[6] != 0) {
        uVar2 = *(undefined8 *)((long)param_2 + (ulong)puVar1[6]);
      }
      goto LAB_015efc54;
    }
  }
  uVar2 = 0;
LAB_015efc54:
  if ((uVar3 < *(ushort *)((long)param_1 - (long)*param_1)) &&
     (uVar4 = (ulong)*(ushort *)(((long)param_1 - (long)*param_1) + (ulong)uVar3), uVar4 != 0)) {
    uVar2 = *(undefined8 *)((long)param_1 + uVar4);
  }
  return uVar2;
}


