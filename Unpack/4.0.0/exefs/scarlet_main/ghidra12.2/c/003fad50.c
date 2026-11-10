/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003fad50; name: FUN_003fad50
 */


undefined8
FUN_003fad50(int *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  int *piVar2;
  
  if (*param_1 != 1) {
    FUN_004806c0(0x2e,0xad,0xb5,"external/openssl/crypto/cms/cms_kari.c",0x3d);
    return 0;
  }
  piVar2 = *(int **)(*(long *)(param_1 + 2) + 8);
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = 0;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  iVar1 = *piVar2;
  if (iVar1 == 2) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = **(undefined8 **)(piVar2 + 2);
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)(*(long *)(piVar2 + 2) + 8);
      return 1;
    }
  }
  else if (iVar1 == 1) {
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = *(undefined8 *)(piVar2 + 2);
      return 1;
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = **(undefined8 **)(piVar2 + 2);
    }
    if (param_6 != (undefined8 *)0x0) {
      *param_6 = *(undefined8 *)(*(long *)(piVar2 + 2) + 8);
    }
  }
  return 1;
}


