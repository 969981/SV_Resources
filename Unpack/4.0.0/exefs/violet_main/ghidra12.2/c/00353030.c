/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00353030; name: FUN_00353030
 */


void FUN_00353030(long param_1,long *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  char *pcVar6;
  bool bVar7;
  ulong uVar8;
  byte bVar9;
  char cVar10;
  
  bVar7 = true;
  bVar9 = *(byte *)(param_1 + 0x2d);
  do {
    if (bVar9 == 0xff) {
      return;
    }
    lVar1 = param_1 + (ulong)bVar9 * 8;
    if (!bVar7) {
      uVar8 = *param_3;
      if (uVar8 == *param_4) {
        uVar2 = 8;
        if (0xf < uVar8 * 3) {
          uVar2 = uVar8 * 3 >> 1;
        }
        *param_4 = uVar2;
        lVar5 = FUN_0038c7f0(*param_2);
        *param_2 = lVar5;
        uVar8 = *param_3;
      }
      else {
        lVar5 = *param_2;
      }
      *param_3 = uVar8 + 1;
      *(undefined1 *)(lVar5 + uVar8) = 0x2c;
    }
    pcVar6 = (char *)FUN_00352270(*(undefined8 *)(lVar1 + 0x38));
    cVar10 = *pcVar6;
    if (cVar10 != '\0') {
      do {
        pcVar6 = pcVar6 + 1;
        uVar8 = *param_3;
        if (uVar8 == *param_4) {
          uVar2 = 8;
          if (0xf < uVar8 * 3) {
            uVar2 = uVar8 * 3 >> 1;
          }
          *param_4 = uVar2;
          lVar5 = FUN_0038c7f0(*param_2);
          *param_2 = lVar5;
          uVar8 = *param_3;
        }
        else {
          lVar5 = *param_2;
        }
        *param_3 = uVar8 + 1;
        *(char *)(lVar5 + uVar8) = cVar10;
        cVar10 = *pcVar6;
      } while (cVar10 != '\0');
    }
    bVar3 = *(byte *)(lVar1 + 0x40);
    bVar4 = bVar3 != 0xff;
    if (*(byte *)(param_1 + 0x2e) != bVar9) {
      bVar4 = bVar3 == 0xff;
    }
    bVar7 = false;
    bVar9 = bVar3;
  } while (!bVar4);
                    /* WARNING: Subroutine does not return */
  abort();
}


