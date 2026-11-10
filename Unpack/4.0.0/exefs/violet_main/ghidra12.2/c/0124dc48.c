/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124dc48; name: FUN_0124dc48
 */


void FUN_0124dc48(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined1 auStack_68 [56];
  
  FUN_012466dc(auStack_68);
  lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8);
  uVar1 = FUN_010f9128(*(undefined4 *)(lVar4 + 0x36c),*(undefined1 *)(lVar4 + 0x370),0);
  if (uVar1 != 0) {
    if (((*(char *)(lVar6 + 0x58) != '\0') && (*(long **)(lVar6 + 0x28) != (long *)0x0)) &&
       (uVar2 = (**(code **)(**(long **)(lVar6 + 0x28) + 0x200))(), (uVar2 & 1) == 0)) {
      FUN_0124e1cc(param_1,auStack_68,0,0,0);
    }
    if (uVar1 != 1) {
      if (((1 < *(byte *)(lVar6 + 0x58)) && (*(long **)(lVar6 + 0x30) != (long *)0x0)) &&
         (uVar2 = (**(code **)(**(long **)(lVar6 + 0x30) + 0x200))(), (uVar2 & 1) == 0)) {
        FUN_0124e1cc(param_1,auStack_68,0,1,1);
      }
      if (uVar1 != 2) {
        uVar5 = 2;
        do {
          if ((((uVar5 & 0xff) < (uint)*(byte *)(lVar6 + 0x58)) &&
              (plVar3 = *(long **)(lVar6 + (ulong)(uVar5 & 0xff) * 8 + 0x28), plVar3 != (long *)0x0)
              ) && (uVar2 = (**(code **)(*plVar3 + 0x200))(), (uVar2 & 1) == 0)) {
            FUN_0124e1cc(param_1,auStack_68,0,uVar5,uVar5);
          }
          uVar5 = uVar5 + 1;
        } while (uVar1 != uVar5);
      }
    }
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8);
  uVar1 = FUN_010f9128(*(undefined4 *)(lVar4 + 0x36c),*(undefined1 *)(lVar4 + 0x370),1);
  if (uVar1 != 0) {
    if (((*(char *)(lVar6 + 0x90) != '\0') && (*(long **)(lVar6 + 0x60) != (long *)0x0)) &&
       (uVar2 = (**(code **)(**(long **)(lVar6 + 0x60) + 0x200))(), (uVar2 & 1) == 0)) {
      FUN_0124e1cc(param_1,auStack_68,1,0,0);
    }
    if (uVar1 != 1) {
      if (((1 < *(byte *)(lVar6 + 0x90)) && (*(long **)(lVar6 + 0x68) != (long *)0x0)) &&
         (uVar2 = (**(code **)(**(long **)(lVar6 + 0x68) + 0x200))(), (uVar2 & 1) == 0)) {
        FUN_0124e1cc(param_1,auStack_68,1,1,1);
      }
      if (uVar1 != 2) {
        uVar5 = 2;
        do {
          if ((((uVar5 & 0xff) < (uint)*(byte *)(lVar6 + 0x90)) &&
              (plVar3 = *(long **)(lVar6 + (ulong)(uVar5 & 0xff) * 8 + 0x60), plVar3 != (long *)0x0)
              ) && (uVar2 = (**(code **)(*plVar3 + 0x200))(), (uVar2 & 1) == 0)) {
            FUN_0124e1cc(param_1,auStack_68,1,uVar5,uVar5);
          }
          uVar5 = uVar5 + 1;
        } while (uVar1 != uVar5);
      }
    }
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8);
  uVar1 = FUN_010f9128(*(undefined4 *)(lVar4 + 0x36c),*(undefined1 *)(lVar4 + 0x370),2);
  if (uVar1 != 0) {
    if (((*(char *)(lVar6 + 200) != '\0') && (*(long **)(lVar6 + 0x98) != (long *)0x0)) &&
       (uVar2 = (**(code **)(**(long **)(lVar6 + 0x98) + 0x200))(), (uVar2 & 1) == 0)) {
      FUN_0124e1cc(param_1,auStack_68,2,0,0);
    }
    if (uVar1 != 1) {
      if (((1 < *(byte *)(lVar6 + 200)) && (*(long **)(lVar6 + 0xa0) != (long *)0x0)) &&
         (uVar2 = (**(code **)(**(long **)(lVar6 + 0xa0) + 0x200))(), (uVar2 & 1) == 0)) {
        FUN_0124e1cc(param_1,auStack_68,2,1,1);
      }
      if (uVar1 != 2) {
        uVar5 = 2;
        do {
          if ((((uVar5 & 0xff) < (uint)*(byte *)(lVar6 + 200)) &&
              (plVar3 = *(long **)(lVar6 + (ulong)(uVar5 & 0xff) * 8 + 0x98), plVar3 != (long *)0x0)
              ) && (uVar2 = (**(code **)(*plVar3 + 0x200))(), (uVar2 & 1) == 0)) {
            FUN_0124e1cc(param_1,auStack_68,2,uVar5,uVar5);
          }
          uVar5 = uVar5 + 1;
        } while (uVar1 != uVar5);
      }
    }
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8);
  uVar1 = FUN_010f9128(*(undefined4 *)(lVar4 + 0x36c),*(undefined1 *)(lVar4 + 0x370),3);
  if (uVar1 != 0) {
    if (((*(char *)(lVar6 + 0x100) != '\0') && (*(long **)(lVar6 + 0xd0) != (long *)0x0)) &&
       (uVar2 = (**(code **)(**(long **)(lVar6 + 0xd0) + 0x200))(), (uVar2 & 1) == 0)) {
      FUN_0124e1cc(param_1,auStack_68,3,0,0);
    }
    if (uVar1 != 1) {
      if (((1 < *(byte *)(lVar6 + 0x100)) && (*(long **)(lVar6 + 0xd8) != (long *)0x0)) &&
         (uVar2 = (**(code **)(**(long **)(lVar6 + 0xd8) + 0x200))(), (uVar2 & 1) == 0)) {
        FUN_0124e1cc(param_1,auStack_68,3,1,1);
      }
      if (uVar1 != 2) {
        uVar5 = 2;
        do {
          if ((((uVar5 & 0xff) < (uint)*(byte *)(lVar6 + 0x100)) &&
              (plVar3 = *(long **)(lVar6 + (ulong)(uVar5 & 0xff) * 8 + 0xd0), plVar3 != (long *)0x0)
              ) && (uVar2 = (**(code **)(*plVar3 + 0x200))(), (uVar2 & 1) == 0)) {
            FUN_0124e1cc(param_1,auStack_68,3,uVar5,uVar5);
          }
          uVar5 = uVar5 + 1;
        } while (uVar1 != uVar5);
      }
    }
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8);
  uVar1 = FUN_010f9128(*(undefined4 *)(lVar4 + 0x36c),*(undefined1 *)(lVar4 + 0x370),4);
  if (uVar1 != 0) {
    if (((*(char *)(lVar6 + 0x138) != '\0') && (*(long **)(lVar6 + 0x108) != (long *)0x0)) &&
       (uVar2 = (**(code **)(**(long **)(lVar6 + 0x108) + 0x200))(), (uVar2 & 1) == 0)) {
      FUN_0124e1cc(param_1,auStack_68,4,0,0);
    }
    if (uVar1 != 1) {
      if (((1 < *(byte *)(lVar6 + 0x138)) && (*(long **)(lVar6 + 0x110) != (long *)0x0)) &&
         (uVar2 = (**(code **)(**(long **)(lVar6 + 0x110) + 0x200))(), (uVar2 & 1) == 0)) {
        FUN_0124e1cc(param_1,auStack_68,4,1,1);
      }
      if (uVar1 != 2) {
        uVar5 = 2;
        do {
          if ((((uVar5 & 0xff) < (uint)*(byte *)(lVar6 + 0x138)) &&
              (plVar3 = *(long **)(lVar6 + (ulong)(uVar5 & 0xff) * 8 + 0x108), plVar3 != (long *)0x0
              )) && (uVar2 = (**(code **)(*plVar3 + 0x200))(), (uVar2 & 1) == 0)) {
            FUN_0124e1cc(param_1,auStack_68,4,uVar5,uVar5);
          }
          uVar5 = uVar5 + 1;
        } while (uVar1 != uVar5);
      }
    }
  }
  FUN_0124e19c(param_1,auStack_68);
  return;
}


