/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003242b4; name: FUN_003242b4
 */


void FUN_003242b4(long param_1,ulong param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x10);
  lVar3 = *(long *)(lVar5 + 0x1e0);
  if (((lVar3 == 0) || ((*(byte *)(lVar3 + 0x10) >> 3 & 1) == 0)) ||
     (*(long *)(*(long *)(lVar3 + 8) + 0x48) == 0)) {
    lVar3 = *(long *)(lVar5 + 0x1f0);
    if (((lVar3 == 0) || ((*(byte *)(lVar3 + 0x10) >> 3 & 1) == 0)) ||
       (*(long *)(*(long *)(lVar3 + 8) + 0x48) == 0)) {
      lVar3 = *(long *)(lVar5 + 0x200);
      if (((lVar3 == 0) || ((*(byte *)(lVar3 + 0x10) >> 3 & 1) == 0)) ||
         (*(long *)(*(long *)(lVar3 + 8) + 0x48) == 0)) {
        lVar3 = *(long *)(lVar5 + 0x210);
        if (((lVar3 == 0) || ((*(byte *)(lVar3 + 0x10) >> 3 & 1) == 0)) ||
           (*(long *)(*(long *)(lVar3 + 8) + 0x48) == 0)) {
          lVar3 = *(long *)(lVar5 + 0x220);
          if (((lVar3 == 0) || ((*(byte *)(lVar3 + 0x10) >> 3 & 1) == 0)) ||
             (*(long *)(*(long *)(lVar3 + 8) + 0x48) == 0)) {
            lVar3 = *(long *)(lVar5 + 0x230);
            if (((lVar3 == 0) || ((*(byte *)(lVar3 + 0x10) >> 3 & 1) == 0)) ||
               (*(long *)(*(long *)(lVar3 + 8) + 0x48) == 0)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            plVar6 = (long *)(lVar5 + 0x230);
          }
          else {
            plVar6 = (long *)(lVar5 + 0x220);
          }
        }
        else {
          plVar6 = (long *)(lVar5 + 0x210);
        }
      }
      else {
        plVar6 = (long *)(lVar5 + 0x200);
      }
    }
    else {
      plVar6 = (long *)(lVar5 + 0x1f0);
    }
  }
  else {
    plVar6 = (long *)(lVar5 + 0x1e0);
  }
  lVar3 = FUN_0033a31c(*(undefined8 *)(param_1 + 0x10));
  FUN_00377c40(lVar3 + 0x2a8,*(undefined8 *)(*(long *)(*plVar6 + 8) + 0x38));
  plVar4 = (long *)*plVar6;
  lVar3 = plVar4[1];
  lVar7 = *(long *)(lVar3 + 0x48);
  *(undefined8 *)(lVar3 + 0x48) = 0;
  if (((*plVar4 == 0) &&
      ((bVar1 = *(byte *)(plVar4 + 2), (bVar1 >> 4 & 1) == 0 || (*(long *)(lVar3 + 0x68) == 0)))) &&
     (((bVar1 >> 5 & 1) == 0 || (*(long *)(lVar3 + 0x80) == 0)))) {
    bVar2 = *(byte *)(lVar5 + 0x240);
    if ((bVar2 >> 3 & 1) != 0) {
      if ((bVar1 & 1) != 0) {
        bVar2 = bVar2 & 0xfe;
        *(byte *)(lVar5 + 0x240) = bVar2;
        bVar1 = *(byte *)(plVar4 + 2);
      }
      if ((bVar1 >> 2 & 1) != 0) {
        bVar2 = bVar2 & 0xfd;
        *(byte *)(lVar5 + 0x240) = bVar2;
        bVar1 = *(byte *)(plVar4 + 2);
      }
      if ((bVar1 >> 1 & 1) != 0) {
        *(byte *)(lVar5 + 0x240) = bVar2 & 0xfb;
      }
    }
    *plVar6 = 0;
  }
  FUN_00323eb8(param_1);
  if (4 < param_2) {
    param_2 = FUN_00350fb0(param_2);
  }
  if (lVar7 != 0) {
    (**(code **)(lVar7 + 8))(*(undefined8 *)(lVar7 + 0x10),param_2);
  }
  if (param_2 < 5) {
    return;
  }
  FUN_00350fd0(param_2);
  return;
}


