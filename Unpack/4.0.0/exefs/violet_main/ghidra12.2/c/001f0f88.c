/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f0f88; name: FUN_001f0f88
 */


undefined8 FUN_001f0f88(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 == 0) {
    iVar2 = *(int *)(param_2 + 0x10);
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x94c) <= 0x7fffffff - iVar2) {
        *(int *)(param_1 + 0x94c) = *(int *)(param_1 + 0x94c) + iVar2;
LAB_001f10a0:
        if ((*(code **)(param_1 + 0x7e8) == (code *)0x0) ||
           (iVar2 = (**(code **)(param_1 + 0x7e8))(param_1,param_2,*(undefined8 *)(param_1 + 0x8b8))
           , iVar2 == 0)) {
          uVar4 = 0;
        }
        else {
          uVar4 = 0xfffffc7a;
        }
        return uVar4;
      }
      uVar4 = 0xfffffdf4;
      pcVar5 = (char *)0x0;
      goto LAB_001f10ec;
    }
LAB_001f108c:
    pcVar5 = "WINDOW_UPDATE: window_size_increment == 0";
  }
  else {
    if ((uVar1 & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0')) {
      iVar2 = *(int *)(param_1 + 0x934);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x938);
    }
    if (iVar2 < (int)uVar1) {
      pcVar5 = "WINDOW_UPDATE to idle stream";
    }
    else {
      lVar3 = FUN_001edb18(param_1);
      if (lVar3 == 0) {
        return 0;
      }
      if ((*(int *)(lVar3 + 0xdc) != 4) ||
         ((*(uint *)(lVar3 + 0xb8) != 0 &&
          (((*(uint *)(lVar3 + 0xb8) & 1) == 0) != (*(char *)(param_1 + 0x9aa) == '\0'))))) {
        iVar2 = *(int *)(param_2 + 0x10);
        if (iVar2 != 0) {
          if (0x7fffffff - iVar2 < *(int *)(lVar3 + 0xbc)) {
            uVar4 = FUN_001f3ca0(param_1,*(undefined4 *)(param_2 + 8),param_2,0xfffffdf4);
            return uVar4;
          }
          iVar2 = *(int *)(lVar3 + 0xbc) + iVar2;
          *(int *)(lVar3 + 0xbc) = iVar2;
          if (((0 < iVar2) && (iVar2 = FUN_001f98e0(lVar3), iVar2 != 0)) &&
             (uVar4 = FUN_001f9894(lVar3,4), (int)uVar4 < -900)) {
            return uVar4;
          }
          goto LAB_001f10a0;
        }
        goto LAB_001f108c;
      }
      pcVar5 = "WINDOW_UPADATE to reserved stream";
    }
  }
  uVar4 = 0xfffffe07;
LAB_001f10ec:
  uVar4 = FUN_001f0268(param_1,param_2,uVar4,pcVar5);
  return uVar4;
}


