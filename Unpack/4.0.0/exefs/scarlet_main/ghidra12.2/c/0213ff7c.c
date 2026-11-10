/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0213ff7c; name: FUN_0213ff7c
 */


void FUN_0213ff7c(long param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  if ((*(long *)(param_1 + 0x260) != 0) || (*param_2 != 0)) {
    pcVar1 = *(code **)(param_1 + 0x268);
    if (pcVar1 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x270) = 0;
      *(undefined8 *)(param_1 + 0x278) = 0;
      *(long *)(param_1 + 0x260) = 0;
      *(undefined8 *)(param_1 + 0x268) = 0;
      (*pcVar1)(param_1 + 0x280);
    }
    if ((code *)param_2[2] != (code *)0x0) {
      (*(code *)param_2[2])(param_2 + 4,param_1 + 0x280);
      lVar2 = param_2[3];
      *(long *)(param_1 + 0x268) = param_2[1];
      *(long *)(param_1 + 0x278) = lVar2;
      lVar2 = *param_2;
      *(long *)(param_1 + 0x270) = param_2[2];
      *(long *)(param_1 + 0x260) = lVar2;
    }
    lVar2 = *(long *)(param_1 + 0x208);
    *(undefined4 *)(param_1 + 0x2e0) = 0;
    lVar3 = *(long *)(param_1 + 0x210);
    if (((lVar2 != lVar3) && (*(undefined1 *)(lVar2 + 0x10) = 1, lVar2 + 0x18 != lVar3)) &&
       (*(undefined1 *)(lVar2 + 0x28) = 1, lVar2 + 0x30 != lVar3)) {
      *(undefined1 *)(lVar2 + 0x40) = 1;
      for (lVar2 = lVar2 + 0x48; lVar2 != lVar3; lVar2 = lVar2 + 0x18) {
        *(undefined1 *)(lVar2 + 0x10) = 1;
      }
    }
  }
  return;
}


