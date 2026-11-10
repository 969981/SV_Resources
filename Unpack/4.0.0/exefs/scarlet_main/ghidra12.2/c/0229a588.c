/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0229a588; name: FUN_0229a588
 */


void FUN_0229a588(undefined1 *param_1,void *param_2)

{
  void *__dest;
  void *__src;
  uint uVar1;
  void *__dest_00;
  void *__src_00;
  int iVar2;
  undefined1 auStack_180 [136];
  void *local_f8;
  undefined8 local_f0;
  undefined1 auStack_e8 [96];
  long local_88;
  long local_80;
  undefined1 local_70;
  
  *param_1 = 1;
  memcpy(auStack_180,param_2,0x88);
  local_f8 = (void *)0x0;
  local_f0 = 0x8000000000000000;
  uVar1 = *(uint *)((long)param_2 + 0x90);
  if ((int)uVar1 < 1) {
    local_f8 = (void *)0x0;
    local_f0 = 0x8000000000000000;
  }
  else {
    __src_00 = *(void **)((long)param_2 + 0x88);
    __dest_00 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                  (PTR_PTR_047d1a50,(ulong)uVar1 * 0x30);
    local_f0 = CONCAT44(uVar1,uVar1);
    local_f8 = __dest_00;
    if (uVar1 != 1) {
      iVar2 = -(uVar1 & 0xfffffffe);
      do {
        memcpy(__dest_00,__src_00,0x30);
        __dest = (void *)((long)__dest_00 + 0x30);
        __src = (void *)((long)__src_00 + 0x30);
        __dest_00 = (void *)((long)__dest_00 + 0x60);
        __src_00 = (void *)((long)__src_00 + 0x60);
        memcpy(__dest,__src,0x30);
        iVar2 = iVar2 + 2;
      } while (iVar2 != 0);
    }
    if ((uVar1 & 1) != 0) {
      memcpy(__dest_00,__src_00,0x30);
    }
  }
  memcpy(auStack_e8,(void *)((long)param_2 + 0x98),0x5c);
  local_88 = *(long *)((long)param_2 + 0xf8);
  if (local_88 != 0) {
    FUN_012dcb00();
  }
  local_80 = *(long *)((long)param_2 + 0x100);
  if (local_80 != 0) {
    FUN_012dcb00();
  }
  local_70 = *(undefined1 *)((long)param_2 + 0x110);
  FUN_0229a8a4(param_1 + 8,auStack_180);
  FUN_0229a4a4(auStack_180);
  return;
}


