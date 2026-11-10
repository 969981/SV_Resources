/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02983ecc; name: FUN_02983ecc
 */


undefined8 FUN_02983ecc(undefined8 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  
  if (((char)param_2[0x10] != '\0') && (*param_2 != 0)) {
    lVar3 = FUN_014813f4();
    if (lVar3 == 0) {
      return 0;
    }
    uVar7 = (ulong)*(byte *)(param_2 + 1);
    if (uVar7 != 0) {
      cVar1 = *(char *)((long)param_2 + 0x35);
      piVar8 = param_2 + 2;
      iVar2 = param_2[0xd];
      do {
        FUN_01582534(param_1);
        uVar4 = FUN_014813e4();
        uVar5 = FUN_01481400(uVar4,*piVar8);
        if ((uVar5 & 1) != 0) {
          plVar6 = (long *)FUN_014813f4(param_1,*piVar8);
          uVar5 = (**(code **)(*plVar6 + 0x200))();
          if (((uVar5 & 1) == 0) &&
             (uVar5 = (**(code **)(*plVar6 + 0x270))(plVar6,(char)iVar2,(int)cVar1),
             (uVar5 & 1) != 0)) {
            return 1;
          }
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 1;
      } while (uVar7 != 0);
    }
  }
  return 0;
}


