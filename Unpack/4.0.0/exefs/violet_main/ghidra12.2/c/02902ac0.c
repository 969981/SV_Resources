/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02902ac0; name: FUN_02902ac0
 */


uint FUN_02902ac0(long param_1,long param_2,char param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  byte bVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  int iVar10;
  int *piVar11;
  uint local_64;
  
  bVar6 = *(byte *)(param_2 + 0x841);
  if (bVar6 == 0) {
    local_64 = 10;
  }
  else {
    uVar5 = (ulong)*(byte *)(param_2 + 0x840);
    uVar9 = 0;
    iVar10 = 0;
    bVar2 = 0;
    piVar8 = (int *)(param_2 + 0x18);
    local_64 = 10;
    do {
      if ((int)uVar5 == 0) {
        uVar5 = 0;
      }
      else {
        uVar7 = 0;
        piVar11 = piVar8;
        do {
          if ((((char)piVar11[5] != '\0') &&
              (uVar4 = FUN_010e161c(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x290),piVar11[-6]),
              (uVar4 & 0xff) != (param_4 & 0xff))) &&
             (cVar3 = FUN_0210c6f0(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x290),uVar4),
             cVar3 == param_3)) {
            iVar1 = piVar11[-3] + piVar11[-4] + piVar11[-2] + piVar11[-1] + *piVar11 + piVar11[1] +
                    piVar11[2] + piVar11[3] + piVar11[4];
            bVar6 = bVar2 ^ 1;
            bVar2 = 1;
            if (!(bool)(iVar10 < iVar1 | bVar6)) {
              uVar4 = local_64;
              iVar1 = iVar10;
            }
            iVar10 = iVar1;
            local_64 = uVar4;
          }
          uVar5 = (ulong)*(byte *)(param_2 + 0x840);
          uVar7 = uVar7 + 1;
          piVar11 = piVar11 + 0xc;
        } while (uVar7 < uVar5);
        bVar6 = *(byte *)(param_2 + 0x841);
      }
      uVar9 = uVar9 + 1;
      piVar8 = piVar8 + 0x30;
    } while (uVar9 < bVar6);
  }
  return local_64;
}


