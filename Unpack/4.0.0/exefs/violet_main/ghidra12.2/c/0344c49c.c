/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0344c49c; name: FUN_0344c49c
 */


void FUN_0344c49c(long param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined4 local_48;
  
  plVar3 = *(long **)(param_1 + 0x10);
  uVar2 = *(ushort *)PTR_DAT_047e6d08;
  uVar1 = *(uint *)(param_1 + 0x18);
  plVar5 = plVar3;
  if (uVar1 == 0) {
LAB_0344c52c:
    if (plVar5 != plVar3 + (ulong)uVar1 * 6) {
      for (plVar5 = (long *)plVar5[4]; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (((plVar5[3] == param_2) && (*(char *)(plVar5 + 5) == -0x70)) &&
           ((*(char *)((long)plVar5 + 0x2d) != '\0' &&
            (((*(byte *)(plVar5 + 7) >> 2 & 1) == 0 &&
             (*(int *)((long)plVar5 + 0x34) <= (int)(uint)uVar2)))))) {
          local_48 = *(undefined4 *)(plVar5 + 6);
          _local_50 = CONCAT71((int7)((ulong)plVar5[5] >> 8),0x80);
          FUN_0344b418(param_1,param_2,&local_50,*(int *)((long)plVar5 + 0x34),1,0);
        }
      }
    }
  }
  else {
    lVar4 = (ulong)uVar1 * 0x30;
    do {
      if (((*(long *)(param_2 + 0x40) == *plVar5) && (*(long *)(param_2 + 0x10) == plVar5[1])) &&
         (*(int *)(param_2 + 0x2c) == (int)plVar5[2])) goto LAB_0344c52c;
      lVar4 = lVar4 + -0x30;
      plVar5 = plVar5 + 6;
    } while (lVar4 != 0);
  }
  return;
}


