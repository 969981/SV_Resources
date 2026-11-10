/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02923124; name: FUN_02923124
 */


void FUN_02923124(long param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x36c);
  bVar2 = *(byte *)(*(long *)(param_1 + 8) + 0x370);
  if (iVar1 == 1) {
    FUN_0297c854(bVar2,(ulong)param_2);
    return;
  }
  if (iVar1 != 2) {
    uVar7 = 10;
    if ((param_2 & 0xff) == 0) {
      uVar7 = 1;
    }
    uVar5 = 0;
    if ((param_2 & 0xff) != 1) {
      uVar5 = uVar7;
    }
    if (1 < (param_2 & 0xff)) {
      uVar5 = 10;
    }
    uVar4 = 0;
    goto LAB_029231c4;
  }
  if ((param_2 & 0xff) < 0xb) {
    if (bVar2 == 0) {
      if ((param_2 & 0xff) < 0xb) {
        uVar7 = 0x40e;
LAB_02923220:
        if ((1 << (ulong)(param_2 & 0x1f) & uVar7) != 0) goto LAB_02923228;
      }
    }
    else if (bVar2 == 1) {
      if ((param_2 & 0xff) < 0xb) {
        uVar7 = 0x40c;
        goto LAB_02923220;
      }
    }
    else {
      if (bVar2 == 2) {
        uVar5 = 10;
        if ((param_2 & 0xff) == 3) goto LAB_0292318c;
      }
      else {
        uVar5 = param_2 & 0xff;
      }
      if ((param_2 & 0xff) == 10) goto LAB_0292318c;
    }
    uVar6 = (ulong)param_2 & 0xff;
    if (uVar6 - 4 < 6) {
      uVar5 = 0;
    }
    else {
      cVar3 = (&DAT_03c72710)[(byte)(&DAT_03d6a45a)[*(uint *)(&DAT_03d6a424 + uVar6 * 4)]];
      if (cVar3 == (char)((bVar2 == 0) * '\x02')) {
        uVar5 = 1;
      }
      else if (cVar3 == (char)((bVar2 < 2) * '\x02')) {
        uVar5 = 2;
      }
      else {
        uVar5 = 3;
        if (cVar3 != (char)((bVar2 < 3) * '\x02')) {
          uVar5 = 4;
        }
      }
    }
  }
  else {
LAB_02923228:
    uVar5 = 10;
  }
LAB_0292318c:
  uVar4 = 2;
LAB_029231c4:
  FUN_0123a588(uVar4,bVar2,uVar5,0);
  return;
}


