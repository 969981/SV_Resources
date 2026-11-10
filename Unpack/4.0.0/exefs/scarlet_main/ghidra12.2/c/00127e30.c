/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00127e30; name: FUN_00127e30
 */


int FUN_00127e30(long param_1,long param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  long *plVar7;
  int local_34;
  
  local_34 = param_3;
  if (*(char *)(param_1 + 10) == '\x01') {
LAB_00127eec:
    if (param_2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (uint)*(ushort *)(param_2 + 0xb0);
    }
    *(uint *)(param_1 + 0xb0) = uVar5;
    iVar1 = FUN_00126c60(param_1,&LAB_00128050,&local_34);
    do {
      if (iVar1 < 2) {
joined_r0x0012800c:
        if (iVar1 == 1) {
          uVar6 = *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x38);
        }
        else {
          uVar6 = (undefined4)
                  ((*(long *)(param_1 + 0x10) - **(long **)(param_1 + 0x20)) - 0x10U >> 4);
        }
        *param_4 = uVar6;
        return iVar1;
      }
      lVar2 = *(long *)(param_1 + 0x20);
      if (lVar2 == 0) {
LAB_00127f94:
        plVar7 = *(long **)(param_1 + 0x10);
        *(char *)(param_1 + 10) = (char)iVar1;
        if (iVar1 == 5) {
          lVar2 = FUN_0013be00(param_1,"error in error handling",0x17);
          *plVar7 = lVar2;
          bVar4 = *(byte *)(lVar2 + 8) | 0x40;
        }
        else if (iVar1 == 4) {
          lVar2 = *(long *)(*(long *)(param_1 + 0x18) + 0x110);
          *plVar7 = lVar2;
          bVar4 = *(byte *)(lVar2 + 8) | 0x40;
        }
        else {
          *plVar7 = plVar7[-2];
          bVar4 = *(byte *)(plVar7 + -1);
        }
        *(byte *)(plVar7 + 1) = bVar4;
        *(long **)(param_1 + 0x10) = plVar7 + 2;
        *(long **)(*(long *)(param_1 + 0x20) + 8) = plVar7 + 2;
        goto joined_r0x0012800c;
      }
      while ((*(byte *)(lVar2 + 0x3e) >> 4 & 1) == 0) {
        lVar2 = *(long *)(lVar2 + 0x10);
        if (lVar2 == 0) {
          if (1 < iVar1) goto LAB_00127f94;
          goto joined_r0x0012800c;
        }
      }
      *(long *)(param_1 + 0x20) = lVar2;
      *(ushort *)(lVar2 + 0x3e) = *(ushort *)(lVar2 + 0x3e) & 0xe3ff | (ushort)(iVar1 << 10);
      iVar1 = FUN_00126c60(param_1,FUN_00128690,0);
    } while( true );
  }
  if (*(char *)(param_1 + 10) == '\0') {
    if (*(long **)(param_1 + 0x20) != (long *)(param_1 + 0x60)) {
      plVar7 = (long *)(*(long *)(param_1 + 0x10) + (long)param_3 * -0x10);
      *(long **)(param_1 + 0x10) = plVar7;
      pcVar3 = "cannot resume non-suspended coroutine";
      goto LAB_00127e9c;
    }
    if ((long)param_3 != (*(long *)(param_1 + 0x10) - **(long **)(param_1 + 0x20)) + -0x10 >> 4)
    goto LAB_00127eec;
    plVar7 = (long *)(*(long *)(param_1 + 0x10) + (long)param_3 * -0x10);
  }
  else {
    plVar7 = (long *)(*(long *)(param_1 + 0x10) + (long)param_3 * -0x10);
  }
  pcVar3 = "cannot resume dead coroutine";
  *(long **)(param_1 + 0x10) = plVar7;
LAB_00127e9c:
  lVar2 = FUN_0013c0f0(param_1,pcVar3);
  *plVar7 = lVar2;
  *(byte *)(plVar7 + 1) = *(byte *)(lVar2 + 8) | 0x40;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return 2;
}


