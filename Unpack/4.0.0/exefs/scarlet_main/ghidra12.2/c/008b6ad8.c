/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008b6ad8; name: FUN_008b6ad8
 */


void FUN_008b6ad8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(param_2 + 0xd2);
  lVar6 = param_1 + 0xf8;
  *(undefined8 *)(param_1 + 0xda) = *(undefined8 *)(param_2 + 0xda);
  *(undefined8 *)(param_1 + 0xd2) = uVar4;
  *(undefined1 *)(param_1 + 0x108) = *(undefined1 *)(param_2 + 0x108);
  *(undefined1 *)(param_1 + 0x109) = *(undefined1 *)(param_2 + 0x109);
  *(undefined1 *)(param_1 + 0x10a) = *(undefined1 *)(param_2 + 0x10a);
  *(undefined4 *)(param_1 + 0x128) = 0;
  FUN_00892800(lVar6);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  FUN_00892800(lVar6);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  FUN_00892800(lVar6);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  FUN_00892800(lVar6);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  bVar1 = *(byte *)(param_2 + 0xf9);
  if (bVar1 != 0) {
    FUN_0089283c(lVar6,bVar1);
    FUN_00892898(lVar6,(ulong)bVar1);
    lVar10 = 0;
    iVar8 = 0;
    do {
      FUN_00892950(lVar6,iVar8,*(long *)(param_2 + 0x100) + lVar10);
      lVar10 = lVar10 + 0x20;
      iVar8 = iVar8 + 1;
    } while ((ulong)bVar1 * 0x20 != lVar10);
  }
  uStack_78 = 0;
  lVar6 = *(long *)(param_2 + 0x118);
  local_80 = param_3;
  local_70 = param_4;
  uStack_68 = param_5;
  if ((lVar6 == 0) || ((*(byte *)(lVar6 + 0x49) & 1) != 0)) {
    *(long *)(param_1 + 0x118) = lVar6;
  }
  else {
    lVar10 = FUN_00896e78(0x50);
    if (lVar10 != 0) {
      FUN_008a199c(lVar10,lVar6,&local_80);
    }
    *(long *)(param_1 + 0x118) = lVar10;
  }
  cVar2 = *(char *)(param_1 + 0x109);
  uVar7 = (ulong)cVar2;
  *(undefined1 *)(param_1 + 0x109) = 0;
  lVar6 = FUN_00896e78(uVar7 << 4);
  if (lVar6 == 0) {
    cVar2 = *(char *)(param_1 + 0x109);
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  else {
    if ('\0' < cVar2) {
      if ((uVar7 & 0xffffffff) == 1) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        puVar5 = (undefined1 *)(lVar6 + 0x10);
        do {
          lVar10 = lVar10 + 2;
          puVar5[-0x10] = 0;
          *(undefined8 *)(puVar5 + -8) = 0;
          *puVar5 = 0;
          *(undefined8 *)(puVar5 + 8) = 0;
          puVar5 = puVar5 + 0x20;
        } while ((uVar7 & 0xffffffff) - (uVar7 & 1) != lVar10);
      }
      if ((uVar7 & 1) != 0) {
        puVar5 = (undefined1 *)(lVar6 + lVar10 * 0x10);
        *puVar5 = 0;
        *(undefined8 *)(puVar5 + 8) = 0;
      }
    }
    *(long *)(param_1 + 0x110) = lVar6;
    *(char *)(param_1 + 0x109) = cVar2;
  }
  if ('\0' < cVar2) {
    lVar10 = 0;
    lVar9 = 1;
    while( true ) {
      *(undefined1 *)(lVar6 + lVar10) = *(undefined1 *)(*(long *)(param_2 + 0x110) + lVar10);
      uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x110) + lVar10 + 8);
      lVar6 = FUN_00896e78(0x50);
      if (lVar6 != 0) {
        FUN_008a199c(lVar6,uVar4,&local_80);
      }
      *(long *)(*(long *)(param_1 + 0x110) + lVar10 + 8) = lVar6;
      if (*(char *)(param_1 + 0x109) <= lVar9) break;
      lVar6 = *(long *)(param_1 + 0x110);
      lVar10 = lVar10 + 0x10;
      lVar9 = lVar9 + 1;
    }
  }
  if (*(long *)(param_2 + 0x120) == 0) {
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  else {
    if ((*(char *)(param_1 + 0x108) == '\x02') || (*(char *)(param_1 + 0x108) == '\x01')) {
      uVar4 = FUN_00896e78(4);
      uVar3 = 1;
    }
    else {
      uVar4 = FUN_00896e78(0xc);
      uVar3 = 3;
    }
    *(undefined8 *)(param_1 + 0x120) = uVar4;
    *(undefined4 *)(param_1 + 0x128) = uVar3;
  }
  return;
}


