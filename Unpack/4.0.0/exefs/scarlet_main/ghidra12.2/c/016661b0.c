/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016661b0; name: FUN_016661b0
 */


void FUN_016661b0(long param_1,undefined1 param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = FUN_012409b4(*(undefined8 *)(param_1 + 0x10));
  switch(param_2) {
  case 1:
    if (*(int *)(lVar2 + 0x70) == 0) {
      *(undefined4 *)(lVar2 + 0x70) = 1;
      *(ulong *)(lVar2 + 0x68) = (ulong)param_3;
      plVar3 = (long *)FUN_0106fc68();
      uVar1 = (**(code **)(*plVar3 + 0x108))();
      *(uint *)(lVar2 + 0x90) = uVar1 & 0xffff;
    }
    return;
  case 2:
    if ((*(int *)(lVar2 + 0x70) == 1) && (*(undefined4 *)(lVar2 + 0x70) = 2, param_3 == 1)) {
      *(undefined8 *)(lVar2 + 0x7c) = 0xffffffffffffffff;
      *(undefined2 *)(lVar2 + 0x84) = 0xffff;
      return;
    }
    break;
  case 3:
    *(undefined1 *)(lVar2 + 0x8d) = 1;
    return;
  case 4:
    if ((int)param_3 < 6) {
      *(undefined1 *)(lVar2 + (int)param_3 + 0x86) = 1;
      return;
    }
    break;
  case 5:
    *(undefined1 *)(lVar2 + 0x8c) = 1;
    return;
  case 6:
    if ((param_3 & 0xff) < 5) {
      *(undefined2 *)(lVar2 + (ulong)(param_3 & 0xff) * 2 + 0x7c) = 0;
      return;
    }
    break;
  case 7:
    if (*(int *)(lVar2 + 0x70) == 1) {
      *(uint *)(lVar2 + 0x78) = *(int *)(lVar2 + 0x78) + param_3;
    }
  }
  return;
}


