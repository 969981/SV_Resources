/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01921c50; name: FUN_01921c50
 */


undefined8 FUN_01921c50(long param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_28;
  ushort local_24 [2];
  
  iVar1 = FUN_01921d0c(*(undefined8 *)(param_1 + 0x48));
  if (iVar1 == 0) {
    local_24[0] = 0;
    local_28 = 0;
    iVar1 = FUN_01a371b8(&local_28,local_24,*(undefined8 *)(param_1 + 0x48),
                         *(undefined8 *)(param_1 + 0x50),*(undefined1 *)(param_1 + 0x11c));
    if (iVar1 == 0) {
      return 1;
    }
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined8 *)(param_2 + 4) = 0;
    if (local_24[0] != 0) {
      *param_2 = 0x117;
      *(undefined1 *)(param_2 + 1) = 0;
      *(undefined1 *)((long)param_2 + 5) = 0x22;
      param_2[2] = local_28;
      param_2[3] = (uint)local_24[0];
      return 0;
    }
    uVar2 = 0x23a;
  }
  else {
    if (iVar1 != 1) {
      return 1;
    }
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    uVar2 = 0x23c;
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined8 *)(param_2 + 4) = 0;
  }
  *param_2 = uVar2;
  *(undefined2 *)(param_2 + 1) = 0x100;
  return 0;
}


