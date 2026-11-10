/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d63bb8; name: FUN_01d63bb8
 */


void FUN_01d63bb8(char *param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  if (*param_1 == '\x01') {
    lVar4 = *(long *)(param_1 + 8);
    if (lVar4 != 0) {
      lVar6 = 0;
      do {
        puVar1 = (undefined1 *)(param_3 + lVar6);
        puVar2 = (undefined1 *)(lVar4 + param_2 + lVar6);
        *puVar2 = *puVar1;
        *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(puVar1 + 8);
        *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(puVar1 + 0x10);
        *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(puVar1 + 0x18);
        plVar5 = *(long **)(puVar1 + 0x20);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
        plVar3 = *(long **)(puVar2 + 0x20);
        *(long **)(puVar2 + 0x20) = plVar5;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x20))();
        }
        *(undefined8 *)(puVar2 + 0x38) = *(undefined8 *)(puVar1 + 0x38);
        lVar6 = lVar6 + 0x40;
        *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)(puVar1 + 0x30);
      } while (lVar6 != 0x500);
    }
    return;
  }
  if ((*param_1 == '\0') && (lVar4 = *(long *)(param_1 + 8), lVar4 != 0)) {
    lVar6 = 0;
    do {
      puVar1 = (undefined1 *)(param_3 + lVar6);
      puVar2 = (undefined1 *)(lVar4 + param_2 + lVar6);
      *puVar2 = *puVar1;
      *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(puVar1 + 8);
      *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(puVar1 + 0x10);
      *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(puVar1 + 0x18);
      plVar5 = *(long **)(puVar1 + 0x20);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      plVar3 = *(long **)(puVar2 + 0x20);
      *(long **)(puVar2 + 0x20) = plVar5;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x20))();
      }
      *(undefined8 *)(puVar2 + 0x38) = *(undefined8 *)(puVar1 + 0x38);
      lVar6 = lVar6 + 0x40;
      *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)(puVar1 + 0x30);
    } while (lVar6 != 0x500);
  }
  return;
}


