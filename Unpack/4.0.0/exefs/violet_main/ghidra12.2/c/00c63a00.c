/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c63a00; name: mmap
 */


void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 *local_28;
  
  uVar5 = __len + 0xfff & 0xfffffffffffff000;
  std::mutex::lock();
  if (DAT_04859d80 == 0) {
    lVar2 = DAT_04859d70;
  }
  else {
    puVar3 = &DAT_04859d88;
    if (DAT_04859d88 != (undefined8 *)0x0) {
      puVar3 = DAT_04859d88;
    }
    if (uVar5 <= (ulong)puVar3[6]) {
      do {
        plVar4 = puVar3 + 1;
        if ((*plVar4 == 0) || (*(ulong *)(*plVar4 + 0x30) < uVar5)) {
          plVar4 = puVar3 + 2;
          if ((*plVar4 == 0) || (*(ulong *)(*plVar4 + 0x30) < uVar5)) goto LAB_00c63af4;
        }
        puVar3 = (undefined8 *)*plVar4;
      } while( true );
    }
    local_28 = &DAT_04859d88;
    lVar1 = FUN_027065c0(&local_28);
    lVar2 = *(long *)(lVar1 + 0x28);
    if ((ulong)(DAT_04859d78 + DAT_04859d70) <= *(long *)(lVar1 + 0x28) + uVar5) {
      pvVar6 = (void *)0x0;
      goto LAB_00c63ad4;
    }
  }
  goto LAB_00c63ac8;
LAB_00c63af4:
  lVar2 = puVar3[4] - puVar3[6];
LAB_00c63ac8:
  pvVar6 = (void *)FUN_02706410(lVar2,uVar5);
LAB_00c63ad4:
  std::mutex::unlock();
  return pvVar6;
}


