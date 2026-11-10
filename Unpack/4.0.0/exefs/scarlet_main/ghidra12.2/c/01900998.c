/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01900998; name: FUN_01900998
 */


void FUN_01900998(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_30 [16];
  
  thunk_FUN_01900a34();
  lVar2 = *(long *)(*param_2 + 0x40);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x48) == 0)) {
    if (*(char *)(lVar2 + 0xd0) == '\0') {
      *(undefined8 *)(lVar2 + 0xd8) = 0;
      *(undefined1 *)(lVar2 + 0xd0) = 1;
    }
    else {
      *(undefined8 *)(lVar2 + 0xd8) = 0;
    }
    FUN_0135d328(auStack_30,*(undefined8 *)(lVar2 + 0xe0),0);
    plVar1 = *(long **)(lVar2 + 0xe8);
    *(undefined8 *)(lVar2 + 0xe8) = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    FUN_0135d2ec(auStack_30);
    *(undefined4 *)(lVar2 + 0x48) = 1;
    FUN_0174a3b8(lVar2);
  }
  return;
}


