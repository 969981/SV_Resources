/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02158920; name: FUN_02158920
 */


undefined1 FUN_02158920(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  *(undefined1 *)(param_1 + 0x128) = 0;
  if ((*(char *)(param_1 + 0x82) != '\0') && (lVar3 = *param_2, lVar3 != 0)) {
    lVar1 = param_1 + 0x138;
    if ((*(char *)(lVar3 + 0x250) != '\0') &&
       (uVar2 = (**(code **)(**(long **)(lVar3 + 8) + 0x70))(*(long **)(lVar3 + 8),lVar1),
       (uVar2 & 1) != 0)) {
      *(undefined1 *)(param_1 + 0x128) = 1;
      *(undefined1 *)(param_1 + 0x130) = 1;
    }
    lVar3 = *param_2;
    if (lVar3 != 0) {
      if ((*(char *)(lVar3 + 0x250) != '\0') &&
         (uVar2 = (**(code **)(**(long **)(lVar3 + 8) + 0x78))(*(long **)(lVar3 + 8),lVar1),
         (uVar2 & 1) != 0)) {
        *(undefined1 *)(param_1 + 0x128) = 1;
        *(undefined1 *)(param_1 + 0x131) = 1;
      }
      lVar3 = *param_2;
      if (lVar3 != 0) {
        if ((*(char *)(lVar3 + 0x250) != '\0') &&
           (uVar2 = (**(code **)(**(long **)(lVar3 + 8) + 0x88))(*(long **)(lVar3 + 8),lVar1),
           (uVar2 & 1) != 0)) {
          *(undefined1 *)(param_1 + 0x128) = 1;
          *(undefined1 *)(param_1 + 0x133) = 1;
        }
        lVar3 = *param_2;
        if (((lVar3 != 0) && (*(char *)(lVar3 + 0x250) != '\0')) &&
           (uVar2 = (**(code **)(**(long **)(lVar3 + 8) + 0x80))(*(long **)(lVar3 + 8),lVar1),
           (uVar2 & 1) != 0)) {
          *(undefined1 *)(param_1 + 0x128) = 1;
          *(undefined1 *)(param_1 + 0x132) = 1;
        }
      }
    }
  }
  return *(undefined1 *)(param_1 + 0x128);
}


