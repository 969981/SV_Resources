/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018d1a70; name: FUN_018d1a70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_018d1a70(byte *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  
  if ((1 < *param_1) ||
     (puVar5 = *(undefined **)(param_1 + 8), *(undefined **)(param_1 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047df4f8 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(PTR_DAT_047df4f8);
      puVar5 = PTR_DAT_047df500;
      uVar3 = _UNK_03cabe58;
      uVar2 = _DAT_03cabe50;
      if (iVar4 != 0) {
        puVar1 = (undefined8 *)(PTR_DAT_047df500 + 0x20);
        *(undefined8 *)(PTR_DAT_047df500 + 0x28) = 0;
        *puVar1 = 0;
        *(undefined8 *)(puVar5 + 8) = 0;
        *(undefined8 *)puVar5 = 0;
        *(undefined8 *)(puVar5 + 0x18) = uVar3;
        *(undefined8 *)(puVar5 + 0x10) = uVar2;
        __cxa_guard_release(PTR_DAT_047df4f8);
      }
    }
    else {
      puVar5 = PTR_DAT_047df500;
    }
  }
  return puVar5;
}


