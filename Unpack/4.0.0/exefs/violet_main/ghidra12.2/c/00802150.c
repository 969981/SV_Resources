/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00802150; name: FUN_00802150
 */


void FUN_00802150(long param_1,ushort *param_2)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar4 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0xb8) + uVar4 * 0x80;
      plVar5 = (long *)(lVar1 + 0x10);
      if (*plVar5 != -1) {
        if (*param_2 != 0) {
          uVar3 = 0;
          do {
            plVar2 = (long *)FUN_00801414(param_2,uVar3);
            if ((plVar2 != (long *)0x0) && (*plVar2 == *plVar5)) goto LAB_008021a4;
            uVar3 = uVar3 + 1;
          } while (uVar3 < *param_2);
        }
        *plVar5 = -1;
        *(undefined8 *)(lVar1 + 0x18) = 0;
        *(undefined4 *)(lVar1 + 0x20) = 0;
        FUN_0078b184(lVar1 + 0x28);
        FUN_0078b184(lVar1 + 0x48);
        *(undefined2 *)(lVar1 + 0x68) = 0;
        *(undefined1 *)(lVar1 + 0x6a) = 0;
        *(undefined4 *)(lVar1 + 0x6c) = 0;
      }
LAB_008021a4:
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0xc0));
  }
  return;
}


