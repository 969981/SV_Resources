/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f6a90; name: FUN_002f6a90
 */


void FUN_002f6a90(long *param_1)

{
  uchar *puVar1;
  void *__s;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  BuiltInCertificateInfoBase *local_b8;
  uint uStack_b0;
  undefined4 local_ac;
  long local_a8;
  undefined8 uStack_a0;
  void *local_98;
  long lStack_90;
  long local_88;
  uchar auStack_7f [7];
  uchar *local_78;
  size_t *local_68;
  
  FUN_003670f0(&local_88,0xc000);
  FUN_003670f0(&local_a8,0x10000);
  puVar1 = auStack_7f;
  if (local_88 != 0) {
    puVar1 = local_78;
  }
  __s = (void *)((long)&uStack_a0 + 1);
  if (local_a8 != 0) {
    __s = local_98;
  }
  memset(__s,0,0x10000);
  lVar7 = 0;
  lVar6 = 0;
  do {
    local_ac = *(undefined4 *)((long)&DAT_03cd4678 + lVar7);
    nn::ssl::BuiltInManager::GetBuiltInCertificateBufSize(&uStack_b0,(CaCertificateId *)&local_ac,1)
    ;
    iVar3 = nn::ssl::BuiltInManager::GetBuiltInCertificates
                      (&local_b8,puVar1,0xc000,(CaCertificateId *)&local_ac,1);
    if (iVar3 == 0) {
      local_68 = *(size_t **)(local_b8 + 0x10);
      lVar4 = FUN_0048c810(0,&local_68,*(undefined4 *)(local_b8 + 8));
                    /* try { // try from 002f6b7c to 002f6b83 has its CatchHandler @ 002f6c98 */
      FUN_003eaa20();
      lVar5 = FUN_003e8a30();
      if (lVar4 == 0) {
        bVar2 = true;
        if (lVar5 != 0) goto LAB_002f6c0c;
      }
      else {
        if (lVar5 == 0) {
          bVar2 = true;
        }
        else {
                    /* try { // try from 002f6b90 to 002f6b9b has its CatchHandler @ 002f6c78 */
          FUN_0045f880(lVar5,lVar4);
                    /* try { // try from 002f6b9c to 002f6b9f has its CatchHandler @ 002f6c74 */
          FUN_00480980();
          local_68 = (size_t *)0x0;
                    /* try { // try from 002f6ba4 to 002f6bbb has its CatchHandler @ 002f6c84 */
          FUN_003e9560(lVar5,0x73,0,&local_68);
          FUN_00480980();
          if (((local_68 == (size_t *)0x0) || ((void *)local_68[1] == (void *)0x0)) ||
             (0xffffU - lVar6 <= *local_68 - 1)) {
            bVar2 = true;
          }
          else {
            memcpy((void *)((long)__s + lVar6),(void *)local_68[1],*local_68);
            bVar2 = false;
            lVar6 = *local_68 + lVar6;
          }
LAB_002f6c0c:
                    /* try { // try from 002f6c0c to 002f6c13 has its CatchHandler @ 002f6c80 */
          FUN_003e8b90(lVar5);
          if (lVar4 == 0) goto LAB_002f6c28;
        }
                    /* try { // try from 002f6c20 to 002f6c27 has its CatchHandler @ 002f6c7c */
        FUN_0048c830(lVar4);
      }
    }
    else {
      bVar2 = true;
    }
LAB_002f6c28:
    if ((bVar2) || (lVar7 = lVar7 + 4, lVar7 == 0x1c)) {
      if (lVar6 == 0) {
        FUN_00367020(param_1);
      }
      else {
        param_1[1] = uStack_a0;
        *param_1 = local_a8;
        param_1[3] = lStack_90;
        param_1[2] = (long)local_98;
      }
      return;
    }
  } while( true );
}


