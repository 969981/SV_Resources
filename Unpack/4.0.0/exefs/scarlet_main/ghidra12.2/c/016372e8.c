/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016372e8; name: FUN_016372e8
 */


void FUN_016372e8(long param_1,char *param_2,int *param_3)

{
  char cVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  
  *param_2 = '\0';
  plVar3 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),param_3[1]);
  lVar4 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),*param_3);
  iVar6 = param_3[4];
  cVar1 = *(char *)((long)param_3 + 0x11);
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x15e0);
  uVar5 = FUN_01932e08(uVar7,plVar3);
  if ((uVar5 & 1) == 0) {
    if (((lVar4 == 0) || (cVar1 != '\0')) || (uVar5 = FUN_01972ce0(uVar7,lVar4), (uVar5 & 1) == 0))
    {
      if (((char)iVar6 == '\0') && (uVar5 = FUN_01972ce0(uVar7,plVar3), (uVar5 & 1) != 0)) {
        iVar6 = 2;
      }
      else {
        iVar6 = 0;
        *param_2 = '\x01';
      }
    }
    else {
      iVar6 = 3;
    }
    if ((char)param_3[3] != '\0') {
      FUN_018ce0ec(*(undefined8 *)(param_1 + 0x20),*param_3,0);
    }
    if (*param_2 == '\0') {
      if (iVar6 == 2) {
        FUN_0167ebc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0xcb,*param_3,0x11d,
                     param_3[1],0xffff0000);
      }
      else if (iVar6 == 3) {
        FUN_0167ebc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0xca,*param_3,0x237,
                     0xffff0000);
      }
    }
    else {
      FUN_018d3110(param_1,plVar3,(short)param_3[2],*(undefined1 *)((long)param_3 + 0xf));
      if ((*(byte *)((long)param_3 + 0x16) & 0x7f) == 0) {
        if (*(short *)((long)param_3 + 10) != 0) {
          FUN_0167ebc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0xcb,param_3[1],0x125,
                       param_3[1],*(short *)((long)param_3 + 10),0xffff0000);
        }
      }
      else {
        FUN_0124b0ac(*(undefined8 *)(param_1 + 0x20),*param_3,param_3 + 5);
      }
    }
    if (((char)param_3[3] != '\0') && (*param_3 != 0)) {
      FUN_0129aff0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),200);
      return;
    }
  }
  else {
    uVar5 = (**(code **)(*plVar3 + 0x1f8))(plVar3);
    if (((uVar5 & 1) != 0) && (*(char *)((long)param_3 + 0xd) != '\0')) {
      lVar4 = *(long *)(param_1 + 0x20);
      iVar6 = *param_3;
      uVar2 = (**(code **)(*plVar3 + 0x98))(plVar3);
      FUN_0167ebc0(*(undefined8 *)(lVar4 + 0x18),0xcb,iVar6,0x11f,uVar2,0xffff0000);
      return;
    }
  }
  return;
}


