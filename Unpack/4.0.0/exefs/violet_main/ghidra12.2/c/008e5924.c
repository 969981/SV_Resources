/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008e5924; name: FUN_008e5924
 */


undefined8 FUN_008e5924(float param_1,long param_2,long param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  uVar1 = *(uint *)(param_3 + 0x14);
  if (param_1 != 0.0) {
    *(uint *)(param_2 + 0x88) = *(uint *)(param_2 + 0x88) | (uint)(1L << ((ulong)uVar1 & 0x3f));
  }
  if (*(char *)(param_3 + 10) != '\x01') {
    param_1 = 0.0;
  }
  FUN_008ca5a8(param_1,param_3,param_4,0,*(undefined8 *)(param_2 + 0x11f0));
  if (*(int *)(param_3 + 0x17c) < 1) {
    if (*(char *)(param_3 + 0xc) != '\0') {
      nn::os::LockMutex((MutexType *)(param_2 + 0x16c0));
      iVar2 = *(int *)(param_2 + 0x8b8);
      if (0 < iVar2) {
        plVar4 = *(long **)(param_2 + 0x8b0);
        lVar5 = (long)iVar2;
        do {
          if (*plVar4 == param_3) goto LAB_008e5b34;
          lVar5 = lVar5 + -1;
          plVar4 = plVar4 + 1;
        } while (lVar5 != 0);
      }
      (*(long **)(param_2 + 0x8b0))[iVar2] = param_3;
      *(int *)(param_2 + 0x8b8) = *(int *)(param_2 + 0x8b8) + 1;
LAB_008e5b34:
      nn::os::UnlockMutex((MutexType *)(param_2 + 0x16c0));
      return 0;
    }
  }
  else if (*(char *)(param_3 + 0xc) != '\0') {
    *(int *)(param_2 + 0x1260) = *(int *)(param_2 + 0x1260) + 1;
    *(int *)(param_2 + 0x1264) = *(int *)(param_2 + 0x1264) + *(int *)(param_3 + 0x17c);
    *(int *)(param_2 + 0x1268) = *(int *)(param_2 + 0x1268) + *(int *)(param_3 + 0x180);
    *(int *)(param_2 + 0x1270) = *(int *)(param_2 + 0x1270) + *(int *)(param_3 + 0x188);
    *(int *)(param_2 + 0x1274) = *(int *)(param_2 + 0x1274) + *(int *)(param_3 + 0x18c);
    *(int *)(param_2 + 0x1278) = *(int *)(param_2 + 0x1278) + *(int *)(param_3 + 400);
    *(int *)(param_2 + 0x126c) = *(int *)(param_2 + 0x126c) + *(int *)(param_3 + 0x184);
    *(int *)(param_2 + 0x127c) = *(int *)(param_2 + 0x127c) + *(int *)(param_3 + 0x194);
    *(int *)(param_2 + 0x1280) = *(int *)(param_2 + 0x1280) + *(int *)(param_3 + 0x198);
    *(int *)(param_2 + 0x1284) = *(int *)(param_2 + 0x1284) + *(int *)(param_3 + 0x19c);
    *(int *)(param_2 + 0x1288) = *(int *)(param_2 + 0x1288) + *(int *)(param_3 + 0x1a0);
    *(int *)(param_2 + 0x128c) = *(int *)(param_2 + 0x128c) + *(int *)(param_3 + 0x1a4);
    lVar5 = *(long *)(param_2 + 0x1298) + *(long *)(param_3 + 0x1b0);
    *(long *)(param_2 + 0x1298) = lVar5;
    *(int *)(param_2 + 0x1290) = *(int *)(param_2 + 0x1290) + *(int *)(param_3 + 0x1a8);
    lVar3 = (long)(int)uVar1 * 4;
    *(long *)(param_2 + 0x1298) = *(long *)(param_3 + 0x1b0) + lVar5;
    lVar5 = *(long *)(param_2 + 0x10) + lVar3;
    *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | *(uint *)(param_3 + 0x230);
    lVar5 = *(long *)(param_2 + 0x10) + lVar3;
    *(uint *)(lVar5 + 0x7b8) = *(uint *)(lVar5 + 0x7b8) | *(uint *)(param_3 + 0x3c);
    lVar3 = *(long *)(param_2 + 0x10) + lVar3;
    *(uint *)(lVar3 + 0x8b8) = *(uint *)(lVar3 + 0x8b8) | *(uint *)(param_3 + 0x40);
    return 1;
  }
  FUN_008d43e0("Invalid EmitterSet has been detected. Invalidates handle.");
  *(undefined4 *)(param_3 + 0x2c) = 0xffffffff;
  return 0;
}


