/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0271ab74; name: FUN_0271ab74
 */


void FUN_0271ab74(undefined1 *param_1)

{
  long lVar1;
  
  (**(code **)PTR_DAT_047d2bb0)(*(undefined8 *)(param_1 + 8));
  lVar1 = *(long *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x100) != 0) {
      (**(code **)PTR_DAT_047d2908)(lVar1);
      free(*(void **)(lVar1 + 0x100));
      *(undefined8 *)(lVar1 + 0x100) = 0;
      *(undefined8 *)(lVar1 + 0x108) = 0;
    }
    if (*(void **)(lVar1 + 0x110) != (void *)0x0) {
      free(*(void **)(lVar1 + 0x110));
      *(undefined8 *)(lVar1 + 0x110) = 0;
    }
    *(undefined8 *)(lVar1 + 0x188) = 0;
    free(*(void **)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  *param_1 = 0;
  return;
}


