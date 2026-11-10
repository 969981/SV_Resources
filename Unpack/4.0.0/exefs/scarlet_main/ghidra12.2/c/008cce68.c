/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008cce68; name: FUN_008cce68
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_008cce68(uint *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  
  lVar2 = *(long *)(param_2 + 0x10);
  if (*(char *)(lVar2 + 0x7f1) != '\0') {
    *param_1 = *param_1 | 8;
  }
  if (*(byte *)(lVar2 + 0x9e7) >> 4 < 3) {
    *param_1 = *param_1 |
               *(uint *)(&DAT_03d0fec8 +
                        ((long)((ulong)*(byte *)(lVar2 + 0x9e7) << 0x38) >> 0x3c) * 4);
    cVar1 = *(char *)(lVar2 + 0xa50);
  }
  else {
    cVar1 = *(char *)(lVar2 + 0xa50);
  }
  if (cVar1 == '\x01') {
    *param_1 = *param_1 | 0x10;
    cVar1 = *(char *)(lVar2 + 0xa50);
  }
  if (cVar1 == '\x02') {
    *param_1 = *param_1 | 0x20;
    cVar1 = *(char *)(lVar2 + 0xa50);
  }
  if (cVar1 == '\x03') {
    *param_1 = *param_1 | 0x40;
    cVar1 = *(char *)(lVar2 + 0xa50);
  }
  if (cVar1 == '\x04') {
    fVar4 = *(float *)(lVar2 + 0x118);
    if (0.0 < fVar4) {
      lVar3 = 0;
      do {
        *(int *)(lVar2 + 0x120 + lVar3 * 4) = (int)lVar3;
        lVar3 = lVar3 + 1;
      } while ((float)(int)lVar3 < fVar4);
    }
    *(float *)(lVar2 + 0x110) = fVar4;
    *param_1 = *param_1 | 0x80;
    cVar1 = *(char *)(lVar2 + 0xa60);
  }
  else {
    cVar1 = *(char *)(lVar2 + 0xa60);
  }
  if (cVar1 == '\x01') {
    *param_1 = *param_1 | 0x100;
    cVar1 = *(char *)(lVar2 + 0xa60);
  }
  if (cVar1 == '\x02') {
    *param_1 = *param_1 | 0x200;
    cVar1 = *(char *)(lVar2 + 0xa60);
  }
  if (cVar1 == '\x03') {
    *param_1 = *param_1 | 0x400;
    cVar1 = *(char *)(lVar2 + 0xa60);
  }
  if (cVar1 == '\x04') {
    fVar4 = *(float *)(lVar2 + 0x1a8);
    if (0.0 < fVar4) {
      lVar3 = 0;
      do {
        *(int *)(lVar2 + 0x1b0 + lVar3 * 4) = (int)lVar3;
        lVar3 = lVar3 + 1;
      } while ((float)(int)lVar3 < fVar4);
    }
    *(float *)(lVar2 + 0x1a0) = fVar4;
    *param_1 = *param_1 | 0x800;
    cVar1 = *(char *)(lVar2 + 0xa70);
  }
  else {
    cVar1 = *(char *)(lVar2 + 0xa70);
  }
  if (cVar1 == '\x01') {
    *param_1 = *param_1 | 0x1000;
    cVar1 = *(char *)(lVar2 + 0xa70);
  }
  if (cVar1 == '\x02') {
    *param_1 = *param_1 | 0x2000;
    cVar1 = *(char *)(lVar2 + 0xa70);
  }
  if (cVar1 == '\x03') {
    *param_1 = *param_1 | 0x4000;
    cVar1 = *(char *)(lVar2 + 0xa70);
  }
  if (cVar1 == '\x04') {
    fVar4 = *(float *)(lVar2 + 0x238);
    if (0.0 < fVar4) {
      lVar3 = 0;
      do {
        *(int *)(lVar2 + 0x240 + lVar3 * 4) = (int)lVar3;
        lVar3 = lVar3 + 1;
      } while ((float)(int)lVar3 < fVar4);
    }
    *(float *)(lVar2 + 0x230) = fVar4;
    *param_1 = *param_1 | 0x8000;
    cVar1 = *(char *)(lVar2 + 0x8ad);
  }
  else {
    cVar1 = *(char *)(lVar2 + 0x8ad);
  }
  if (cVar1 != '\0') {
    *param_1 = *param_1 | 0x10000;
  }
  if (*(char *)(lVar2 + 0x8ae) != '\0') {
    *param_1 = *param_1 | 0x20000;
  }
  if (*(char *)(lVar2 + 0x8af) != '\0') {
    *param_1 = *param_1 | 0x40000;
  }
  if (*(char *)(lVar2 + 0xa55) != '\0') {
    *param_1 = *param_1 | 0x80000;
  }
  if (*(char *)(lVar2 + 0xa56) != '\0') {
    *param_1 = *param_1 | 0x100000;
  }
  if (*(char *)(lVar2 + 0xa65) != '\0') {
    *param_1 = *param_1 | 0x200000;
  }
  if (*(char *)(lVar2 + 0xa66) != '\0') {
    *param_1 = *param_1 | 0x400000;
  }
  if (*(char *)(lVar2 + 0xa75) != '\0') {
    *param_1 = *param_1 | 0x800000;
  }
  if (*(char *)(lVar2 + 0xa76) != '\0') {
    *param_1 = *param_1 | 0x1000000;
  }
  if (*(char *)(lVar2 + 0xa57) != '\0') {
    *param_1 = *param_1 | 0x2000000;
  }
  if (*(char *)(lVar2 + 0xa67) != '\0') {
    *param_1 = *param_1 | 0x4000000;
  }
  if (*(char *)(lVar2 + 0xa77) != '\0') {
    *param_1 = *param_1 | 0x8000000;
  }
  if (*(char *)(lVar2 + 0x8b3) != '\0') {
    *param_1 = *param_1 | 0x10000000;
  }
  cVar1 = *(char *)(lVar2 + 0x8ac);
  if (cVar1 == '\x01') {
    *param_1 = *param_1 | 0x40000000;
    cVar1 = *(char *)(lVar2 + 0x8ac);
  }
  if (cVar1 == '\0') {
    *param_1 = *param_1 | 0x20000000;
    cVar1 = *(char *)(lVar2 + 0x8b4);
  }
  else {
    cVar1 = *(char *)(lVar2 + 0x8b4);
  }
  if (cVar1 != '\0') {
    param_1[1] = param_1[1] | 1;
  }
  if (*(long *)(param_2 + 0x248) != 0) {
    param_1[1] = param_1[1] | 2;
  }
  if (*(long *)(param_2 + 0x250) != 0) {
    param_1[1] = param_1[1] | 0x100;
  }
  if (*(long *)(param_2 + 0x278) != 0) {
    param_1[1] = param_1[1] | 4;
  }
  if (*(long *)(param_2 + 600) != 0) {
    param_1[1] = param_1[1] | 8;
  }
  if (*(long *)(param_2 + 0x270) != 0) {
    param_1[1] = param_1[1] | 0x10;
  }
  if (*(long *)(param_2 + 0x260) != 0) {
    param_1[1] = param_1[1] | 0x20;
  }
  if (*(long *)(param_2 + 0x268) != 0) {
    param_1[1] = param_1[1] | 0x40;
  }
  if (*(long *)(param_2 + 0x280) != 0) {
    param_1[1] = param_1[1] | 0x80;
  }
  if ((ulong)(long)*(char *)(lVar2 + 0x753) < 3) {
    param_1[1] = param_1[1] | *(uint *)(&DAT_03d0fed4 + (long)*(char *)(lVar2 + 0x753) * 4);
  }
  return;
}


