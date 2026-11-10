/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0079ceb8; name: FUN_0079ceb8
 */


undefined8 FUN_0079ceb8(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [32];
  
  (**(code **)(*(long *)param_1[0x25] + 0x48))((long *)param_1[0x25],param_2,param_1[0x22e]);
  lVar3 = param_1[0x22e];
  if (*(short *)((long)param_1 + 0x114e) != 0) {
    uVar2 = 0;
    do {
      uVar1 = FUN_007967e8(*(long *)(param_1[0x11] + uVar2 * 8) + 0x10,lVar3);
      if ((uVar1 & 1) != 0) goto LAB_0079cf18;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)((long)param_1 + 0x114e));
  }
  uVar2 = 0xffff;
LAB_0079cf18:
  uVar1 = (**(code **)(*(long *)param_1[0x24] + 0x90))();
  if ((uVar1 & 1) == 0) {
    FUN_007965ac(auStack_40,lVar3);
    lVar3 = *(long *)PTR_DAT_047d0a08;
    if ((lVar3 != 0) && ((char)param_1[0x22a] != '\0')) {
      FUN_007cdbbc(lVar3,auStack_40);
      FUN_007cd7e4(lVar3,auStack_40,0xffffffff);
    }
    if ((short)uVar2 < 0) {
      return 0;
    }
    lVar3 = *(long *)(param_1[0x11] + (uVar2 & 0xffff) * 8);
    *(undefined2 *)(lVar3 + 8) = 0xff00;
    *(undefined1 *)(lVar3 + 10) = 0;
    FUN_007965fc(lVar3 + 0x10);
    uVar4 = 1;
  }
  else {
    (**(code **)(*param_1 + 0x218))(param_1,lVar3,uVar2 & 0xffffffff);
    uVar4 = 0;
    if ((short)uVar2 < 0) {
      return 0;
    }
  }
  FUN_007ab974(param_1[0x31],uVar2 & 0xffffffff);
  FUN_007ab974(param_1[0x32],uVar2 & 0xffffffff);
  return uVar4;
}


