/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0081b5c0; name: FUN_0081b5c0
 */


void FUN_0081b5c0(long *param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  void *__src;
  size_t __n;
  undefined1 auVar5 [16];
  uint local_5c;
  uint uStack_58;
  uint local_54;
  undefined *local_50;
  int local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  
  puVar2 = PTR_DAT_047d1908;
  if (*(long *)(param_2 + 0x58) != 0) {
    lVar4 = FUN_00818948(param_2 + 0x10);
    local_50 = puVar2 + 0x10;
    local_48 = *(int *)(lVar4 + 8);
    uStack_3c = *(undefined8 *)(lVar4 + 0x14);
    local_44 = *(undefined8 *)(lVar4 + 0xc);
    if (local_48 == 0x1c) {
                    /* try { // try from 0081b648 to 0081b64f has its CatchHandler @ 0081b710 */
      auVar5 = FUN_00818c60(&local_50);
      lVar4 = *(long *)(param_2 + 0x58);
      bVar1 = *(byte *)(lVar4 + 0x10);
      if ((bVar1 & 1) == 0) {
        if ((bVar1 & 0xfe) == 0x18) {
          __src = (void *)(lVar4 + 0x11);
          __n = (size_t)(bVar1 >> 1);
LAB_0081b69c:
          memcpy(&local_5c,__src,__n);
          *param_1 = (long)(puVar2 + 0x10);
          *(undefined4 *)(param_1 + 1) = 0x1c;
          *(ulong *)((long)param_1 + 0xc) =
               (auVar5._0_8_ & 0xffffffff | (ulong)(local_5c ^ auVar5._4_4_) << 0x20) ^ 0x42a41221;
          *(ulong *)((long)param_1 + 0x14) =
               CONCAT44(local_54 ^ auVar5._12_4_,uStack_58 ^ auVar5._8_4_);
          return;
        }
      }
      else if (*(long *)(lVar4 + 0x18) == 0xc) {
        __src = *(void **)(lVar4 + 0x20);
        __n = 0xc;
        goto LAB_0081b69c;
      }
    }
    else if (local_48 == 2) {
                    /* try { // try from 0081b618 to 0081b61f has its CatchHandler @ 0081b714 */
      uVar3 = FUN_00818c70(&local_50);
      *param_1 = (long)(puVar2 + 0x10);
      param_1[2] = 0;
      *(undefined4 *)(param_1 + 3) = 0;
      *(undefined4 *)(param_1 + 1) = 2;
      *(uint *)((long)param_1 + 0xc) = uVar3 ^ 0x42a41221;
      return;
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}


