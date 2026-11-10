/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01698200; name: FUN_01698200
 */


void FUN_01698200(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  
  lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x290) + 8);
  bVar2 = FUN_010f9128(*(undefined4 *)(lVar3 + 0x36c),*(undefined1 *)(lVar3 + 0x370),
                       *(undefined1 *)(param_1 + 0x11c));
  uVar7 = 0;
  cVar4 = '\0';
  if (bVar2 != 0) {
    do {
      lVar3 = param_1 + uVar7;
      uVar7 = uVar7 + 2;
      cVar4 = *(char *)(lVar3 + 0x125) + *(char *)(lVar3 + 0x124) + cVar4;
    } while (((ulong)(bVar2 + 1) & 0x1fe) != uVar7);
  }
  if ((bVar2 + 1 & 1) != 0) {
    cVar4 = *(char *)(param_1 + uVar7 + 0x124) + cVar4;
  }
  bVar2 = cVar4 + bVar2;
  if ((*(int *)(*(long *)(param_1 + 0x50) + 0x36c) == 2) && (*(char *)(param_1 + 0x3ad) != '\0')) {
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x48) + 0x38) + 0x499) >> 2 & 1) == 0) {
      *(undefined8 *)(param_1 + (ulong)bVar2 * 0x10 + 0x220) = *(undefined8 *)(param_1 + 0x88);
      puVar6 = (undefined4 *)(param_1 + 0x90);
    }
    else {
      puVar1 = (undefined8 *)0x0;
      if (*(byte *)(param_1 + 0x11c) < 5) {
        puVar1 = (undefined8 *)
                 (*(long *)(*(long *)(param_1 + 0x50) + 0x30) +
                  (ulong)*(byte *)(param_1 + 0x11c) * 0x38 + 0x28);
      }
      uVar7 = (**(code **)(*(long *)*puVar1 + 0x200))();
      if ((uVar7 & 1) == 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x70);
      }
      else {
        uVar5 = 0;
        *(undefined8 *)(param_1 + 0x70) = 0;
      }
      *(undefined8 *)(param_1 + (ulong)bVar2 * 0x10 + 0x220) = uVar5;
      puVar6 = (undefined4 *)(param_1 + 0x78);
    }
    uVar7 = (ulong)bVar2;
    bVar2 = bVar2 + 1;
    *(undefined4 *)(param_1 + uVar7 * 0x10 + 0x228) = *puVar6;
  }
  *(byte *)(param_1 + 0x138) = bVar2;
  if (5 < bVar2) {
    bVar2 = 6;
  }
  if (bVar2 != 0) {
    *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_1 + 0x220);
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x228);
    if (bVar2 != 1) {
      *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x230);
      *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x238);
      if (bVar2 != 2) {
        *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x240);
        *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_1 + 0x248);
        if (bVar2 != 3) {
          *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x250);
          *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 600);
          if (bVar2 != 4) {
            *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x260);
            *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x268);
            if (bVar2 != 5) {
              *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x270);
              *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x278);
            }
          }
        }
      }
    }
  }
  FUN_0132746c(param_1,param_1 + 0x138,200);
  return;
}


