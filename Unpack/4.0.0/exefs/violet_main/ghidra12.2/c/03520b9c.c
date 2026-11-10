/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03520b9c; name: FUN_03520b9c
 */


undefined8 FUN_03520b9c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [12];
  long local_38;
  
  puVar1 = PTR_DAT_047e70e8;
  local_38 = 0;
  if ((*(long *)PTR_DAT_047e70e8 != 0) && (*(long *)(*(undefined4 **)(param_1 + 200) + 4) == 0)) {
    auVar4 = FUN_03468d28(*(long *)PTR_DAT_047e70e8,**(undefined4 **)(param_1 + 200),&local_38);
    if (local_38 != 0) {
      if (*(long *)(*(undefined4 **)(param_1 + 200) + 4) == 0) {
        FUN_03468ed8(*(undefined8 *)puVar1,**(undefined4 **)(param_1 + 200));
      }
      lVar2 = *(long *)(param_1 + 0xd8);
      *(long *)(param_1 + 0xd8) = local_38;
      if (*(long *)(param_1 + 0xf8) != 0) {
        lVar3 = auVar4._0_8_ - *(long *)(param_1 + 0xf8);
        if (*(long *)(param_1 + 0x118) != 0) {
          *(long *)(param_1 + 0x118) = *(long *)(param_1 + 0x118) + lVar3;
        }
        if (*(long *)(param_1 + 0x120) != 0) {
          *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x120) + lVar3;
        }
        if (*(long *)(param_1 + 0x128) != 0) {
          *(long *)(param_1 + 0x128) = *(long *)(param_1 + 0x128) + lVar3;
        }
        *(long *)(param_1 + 0xf8) = auVar4._0_8_;
      }
      *(undefined1 (*) [12])(param_1 + 0xe0) = auVar4;
      if (lVar2 != 0) {
        FUN_0346034c(lVar2,0);
      }
      return 1;
    }
  }
  return 0;
}


