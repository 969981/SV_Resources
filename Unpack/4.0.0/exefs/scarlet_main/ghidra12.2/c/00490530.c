/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00490530; name: FUN_00490530
 */


undefined8 FUN_00490530(undefined8 param_1,int param_2,uint param_3,uint *param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  byte bStack_51;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  
  uVar2 = *param_4;
  lVar7 = (long)(int)uVar2;
  if ((int)uVar2 < 0) {
LAB_004905cc:
    uVar3 = 0;
  }
  else {
    uVar6 = (ulong)uVar2;
    if (param_2 == 1) {
      if (4 < (int)uVar2) goto LAB_004905cc;
      if ((int)uVar2 < 1) {
        uVar6 = 0;
      }
      else {
        memcpy(&local_50,*(void **)(param_4 + 2),uVar6);
        if ((*(ulong *)(param_4 + 4) & 7) != 0) {
          bVar4 = (byte)(0xff >> (ulong)(8U - (int)(*(ulong *)(param_4 + 4) & 7) & 0x1f));
          if ((param_3 & 0xff) == 0) {
            bVar4 = (&bStack_51)[lVar7] & (bVar4 ^ 0xff);
          }
          else {
            bVar4 = (&bStack_51)[lVar7] | bVar4;
          }
          (&bStack_51)[lVar7] = bVar4;
        }
      }
      memset((void *)((long)&local_50 + uVar6),param_3,4 - lVar7);
      FUN_003e6880(param_1,"%d.%d.%d.%d",(undefined1)local_50,local_50._1_1_,local_4e,local_4d);
    }
    else if (param_2 == 2) {
      if (0x10 < (int)uVar2) goto LAB_004905cc;
      if ((int)uVar2 < 1) {
        uVar6 = 0;
      }
      else {
        memcpy(&local_50,*(void **)(param_4 + 2),uVar6);
        if ((*(ulong *)(param_4 + 4) & 7) != 0) {
          bVar4 = (byte)(0xff >> (ulong)(8U - (int)(*(ulong *)(param_4 + 4) & 7) & 0x1f));
          if ((param_3 & 0xff) == 0) {
            bVar4 = (&bStack_51)[lVar7] & (bVar4 ^ 0xff);
          }
          else {
            bVar4 = (&bStack_51)[lVar7] | bVar4;
          }
          (&bStack_51)[lVar7] = bVar4;
        }
      }
      memset((void *)((long)&local_50 + uVar6),param_3,(long)(int)(0x10 - uVar2));
      lVar7 = 0;
      do {
        lVar5 = lVar7;
        if (lVar5 == -0x10) goto LAB_00490774;
      } while ((*(char *)((long)&local_50 + (ulong)((int)lVar5 + 0xf)) == '\0') &&
              (lVar7 = lVar5 + -2, *(char *)((long)&local_50 + (ulong)((int)lVar5 + 0xe)) == '\0'));
      if ((int)(lVar5 + 0x10U) < 1) {
LAB_00490774:
        FUN_003e9110(param_1,&DAT_03c9c9c5);
      }
      else {
        uVar6 = 0;
        do {
          puVar1 = &DAT_03c9c9c5;
          if (0xd < uVar6) {
            puVar1 = &DAT_03c886bc;
          }
          FUN_003e6880(param_1,&DAT_03c2ce0e,
                       ((*(ushort *)((long)&local_50 + uVar6) & 0xff00) << 8 |
                       (uint)*(ushort *)((long)&local_50 + uVar6) << 0x18) >> 0x10,puVar1);
          uVar6 = uVar6 + 2;
        } while (uVar6 < (lVar5 + 0x10U & 0xfffffffe));
        if ((0xf < (uint)uVar6) || (FUN_003e9110(param_1,&DAT_03c9c9c5), (uint)uVar6 != 0))
        goto LAB_004907dc;
      }
      FUN_003e9110(param_1,&DAT_03c9c9c5);
    }
    else {
      if (0 < (int)uVar2) {
        lVar7 = 0;
        do {
          puVar1 = &DAT_03c886bc;
          if (lVar7 != 0) {
            puVar1 = &DAT_03c9c9c5;
          }
          FUN_003e6880(param_1,"%s%02x",puVar1,*(undefined1 *)(*(long *)(param_4 + 2) + lVar7));
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)*param_4);
      }
      FUN_003e6880(param_1,&DAT_03c7643c,param_4[4] & 7);
    }
LAB_004907dc:
    uVar3 = 1;
  }
  return uVar3;
}


