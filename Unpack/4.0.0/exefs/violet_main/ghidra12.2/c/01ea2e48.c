/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ea2e48; name: FUN_01ea2e48
 */


void FUN_01ea2e48(long param_1,int param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x39) == '\0' || param_2 == 0) {
    return;
  }
  if (param_2 != 2) {
    if (param_2 != 1) {
      if (*(int *)(param_1 + 0x48) != 0) {
        return;
      }
      uVar2 = 2;
      goto LAB_01ea2ed0;
    }
    lVar1 = FUN_0156cb10(param_4);
    if (((lVar1 == param_3) && (*(char *)(param_1 + 0x39) != '\0')) &&
       (*(int *)(param_1 + 0x48) == 0)) {
      *(undefined4 *)(param_1 + 0x48) = 2;
    }
    if (*(long *)(param_1 + 0x40) != param_3) {
      return;
    }
    if (*(char *)(param_1 + 0x39) == '\0') {
      return;
    }
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    return;
  }
  uVar2 = 1;
LAB_01ea2ed0:
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  return;
}


