/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d6b58; name: FUN_001d6b58
 */


undefined8 FUN_001d6b58(undefined8 param_1,long param_2,void *param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  void *__dest;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  long local_48;
  
  piVar5 = (int *)(param_2 + 0x10);
  iVar2 = (int)param_4;
  if (*piVar5 - 1U < 6) {
    switch(*piVar5) {
    case 1:
      iVar1 = FUN_001d6d60(param_3,param_4,&local_48);
      if (iVar1 != 0) {
        if (iVar1 != 2) {
LAB_001d6c84:
          FUN_001d6780(param_1,param_2 + 0x18);
          uVar4 = 0x3d;
          goto LAB_001d6cb4;
        }
        *(int *)(param_2 + 0x20) = iVar2;
        __dest = (void *)FUN_001ec2f8(param_4 & 0xffffffff);
        *(void **)(param_2 + 0x18) = __dest;
        if (__dest != (void *)0x0) {
          memcpy(__dest,param_3,(ulong)*(uint *)(param_2 + 0x20));
          *piVar5 = 4;
          return 0;
        }
LAB_001d6cb0:
        uVar4 = 0x1b;
LAB_001d6cb4:
        uVar4 = FUN_001d6a20(param_1,param_2 + 0x18,piVar5,uVar4);
        return uVar4;
      }
      iVar2 = iVar2 - (int)local_48;
      *(long *)(param_2 + 0x18) = (long)param_3 + local_48;
      break;
    default:
      goto switchD_001d6bac_caseD_2;
    case 3:
      *(void **)(param_2 + 0x18) = param_3;
      *(int *)(param_2 + 0x20) = iVar2;
      uVar4 = FUN_001d67a4(param_1,piVar5);
      return uVar4;
    case 4:
      *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + iVar2;
      lVar3 = FUN_001e0b60(*(undefined8 *)(param_2 + 0x18));
      *(long *)(param_2 + 0x18) = lVar3;
      if (lVar3 == 0) goto LAB_001d6cb0;
      memcpy((void *)((lVar3 + (ulong)*(uint *)(param_2 + 0x20)) - param_4),param_3,param_4);
      iVar2 = FUN_001d6d60(*(undefined8 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x20),&local_48
                          );
      if (iVar2 != 0) {
        if (iVar2 == 2) {
          return 0;
        }
        goto LAB_001d6c84;
      }
      FUN_001ec308(*(undefined8 *)(param_2 + 0x18));
      iVar2 = *(uint *)(param_2 + 0x20) - (int)local_48;
      *(ulong *)(param_2 + 0x18) =
           (long)param_3 + ((param_4 + local_48) - (ulong)*(uint *)(param_2 + 0x20));
      break;
    case 6:
      *(void **)(param_2 + 0x18) = param_3;
      *(int *)(param_2 + 0x20) = iVar2;
      uVar4 = 6;
      goto LAB_001d6d1c;
    }
    *(int *)(param_2 + 0x20) = iVar2;
    *piVar5 = 5;
  }
  else {
switchD_001d6bac_caseD_2:
    *(void **)(param_2 + 0x18) = param_3;
    *(int *)(param_2 + 0x20) = iVar2;
  }
  if (iVar2 == 0) {
    return 0;
  }
  uVar4 = 5;
LAB_001d6d1c:
  uVar4 = FUN_001d6800(param_1,param_2,uVar4);
  return uVar4;
}


